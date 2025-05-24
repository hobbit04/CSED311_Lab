`include "CLOG2.v"
module Cache #(parameter LINE_SIZE = 16,
               parameter NUM_SETS = 16, /* 16 for direct-mapped, 4 for 4-way ~ */
               parameter NUM_WAYS = 1 /* 1 for direct-mapped, 4 for 4-way ~ */) (
    input reset,
    input clk,

    input is_input_valid,
    input [31:0] addr,
    input mem_read,
    input mem_write,
    input [31:0] din,

    output is_ready,
    output is_output_valid,
    output [31:0] dout,
    output is_hit);

  // Local parameters declarations
  localparam OFFSET_BITS = `CLOG2(LINE_SIZE);  // 4
  localparam INDEX_BITS = `CLOG2(NUM_SETS);  // 4
  localparam TAG_BITS = 32 - OFFSET_BITS - INDEX_BITS;  // 24

  localparam IDLE          = 0,  // states for FSM
             COMPARE_TAG   = 1,
             WRITEBACK     = 2,
             ALLOCATE      = 3;

  localparam MAX_LRU_COUNT = (NUM_WAYS == 1) ? 1 : NUM_WAYS - 1;  

  // Wire declarations
  wire is_data_mem_ready, is_data_mem_output_valid;
  wire [LINE_SIZE * 8 - 1:0] data_mem_dout;
  wire [OFFSET_BITS-1:0] offset = addr[OFFSET_BITS-1:0];
  wire [INDEX_BITS-1:0]  index  = addr[OFFSET_BITS +: INDEX_BITS];
  wire [TAG_BITS-1:0]    tag    = addr[31:OFFSET_BITS+INDEX_BITS];
  
  // Reg declarations
  // You might need registers to keep the status.
  reg [1:0] state, next_state;

  reg [TAG_BITS-1:0]    tag_bank  [NUM_SETS-1:0][NUM_WAYS-1:0];
  reg [LINE_SIZE*8-1:0] data_bank [NUM_SETS-1:0][NUM_WAYS-1:0];
  reg valid_bit [NUM_SETS-1:0][NUM_WAYS-1:0];
  reg dirty_bit [NUM_SETS-1:0][NUM_WAYS-1:0];

  // // Registers for capturing the request
  // reg req_read, req_write;
  // reg [OFFSET_BITS-1:0] req_offset;
  // reg [INDEX_BITS-1:0]  req_index;
  // reg [TAG_BITS-1:0]    req_tag;
  // reg [31:0]  req_din;

  // reg [`CLOG2(NUM_WAYS)-1:0] lru_counter [NUM_SETS-1:0][NUM_WAYS-1:0];  // for a-way
  reg lru_counter [NUM_SETS-1:0][NUM_WAYS-1:0];  // for direct-mapped
  
  // DataMemory의 입력으로 들어갈 레지스터들을 따로 선언
  reg data_mem_is_input_valid, data_mem_read, data_mem_write;
  reg [31:0] data_mem_addr;
  reg [LINE_SIZE * 8 - 1:0] data_mem_din;  
  

  reg matching_way;  // for direct-mapped
  // reg [`CLOG2(NUM_WAYS)-1:0] matching_way;  // for a-way

  reg victim;  // for direct-mapped
  // reg [`CLOG2(NUM_WAYS)-1:0] victim; // for a-way 
  integer current_max_lru_cnt;
  
  integer i, j;
  reg flag;  // for breaking the for-loop

  assign is_ready = (next_state == IDLE);  // 데이터 메모리가 준비되거나 다음 상태가 idle이면 캐시가 준비된 상태
  // 헷갈리는 점: 주어진 코드에 is_data_mem_ready만 있었는데, 그것만으로 어떻게 캐시가 준비된 상태인지 알 수 있지? 
  //            -> 사실 next_state가 IDLE이기만 하면 되는 것 같은데.. 왜 저렇게 줬을까
  assign is_output_valid = (state == COMPARE_TAG);
  assign dout = data_bank[index][matching_way][offset[3:2]*32 +: 32];  
  assign is_hit = (valid_bit[index][matching_way] && tag_bank[index][matching_way] == tag);

  // Instantiate data memory
  DataMemory #(.BLOCK_SIZE(LINE_SIZE)) data_mem(
    .reset(reset),
    .clk(clk),

    .is_input_valid(data_mem_is_input_valid),
    .addr(data_mem_addr >> `CLOG2(LINE_SIZE)),        // NOTE: address must be shifted by CLOG2(LINE_SIZE)
    .mem_read(data_mem_read),
    .mem_write(data_mem_write),
    .din(data_mem_din),

    // is output from the data memory valid?
    .is_output_valid(is_data_mem_output_valid),
    .dout(data_mem_dout),
    // is data memory ready to accept request?
    .mem_ready(is_data_mem_ready)
  );

  // Find matching way
  always @(*) begin
    matching_way = 0;
    for(i = 0; i < NUM_WAYS; i = i + 1) begin
      if (tag_bank[index][i] == tag && valid_bit[index][i]) begin
        matching_way = i;
      end
    end
  end

  // State transition control
  always @(*) begin
    next_state = state;
    case (state)
      IDLE: begin
        if(is_input_valid) begin
          next_state = COMPARE_TAG;
        end
      end
      COMPARE_TAG: begin
        if(is_hit) begin
          next_state = IDLE;
        end
        else if(dirty_bit[index][matching_way]) begin 
          next_state = WRITEBACK;
        end
        else begin
          next_state = ALLOCATE;
        end
      end
      WRITEBACK: begin
        if(is_data_mem_ready) begin
          next_state = ALLOCATE;
        end
      end
      ALLOCATE: begin
        if(is_data_mem_ready) begin
          next_state = IDLE;
        end
      end
      default: begin
        next_state = IDLE;
      end
    endcase
  end

  // Calculate DataMemory's inputs 
  always @(*) begin
    data_mem_is_input_valid = 0;
    data_mem_addr = addr;
    data_mem_read = 0;
    data_mem_write = 0;
    data_mem_din = 0;
    case(state)
      IDLE: begin
        
      end
      COMPARE_TAG: begin
        
      end
      WRITEBACK: begin
        data_mem_write = 1;
        data_mem_is_input_valid = 1;
        data_mem_din = data_bank[index][matching_way]; 
      end
      ALLOCATE: begin
        data_mem_is_input_valid = 1;
        data_mem_read = 1;
      end
    endcase
  end

  // For updating data
  always @(posedge clk) begin
    if(reset) begin
      for(i = 0; i < NUM_SETS; i = i + 1) begin
        for(j = 0; j < NUM_WAYS; j = j + 1)begin
          tag_bank[i][j] <= 0;
          data_bank[i][j] <= 0;
          valid_bit[i][j] <= 0;
          dirty_bit[i][j] <= 0;
          lru_counter[i][j] <= 0;
        end
      end
      state <= IDLE;
      next_state <= state;
    end
    else begin
      case(state)
        IDLE: begin
          // no need to do anything about cache
        end
        COMPARE_TAG: begin
          // todo: if is_hit, pass the data to the output
          if(is_hit) begin
            dout <= data_bank[index][matching_way][offset[3:2]*32 +: 32];
            // todo: update lru_counter
            for(i = 0; i < NUM_WAYS; i = i + 1) begin
              if(i == matching_way) begin
                lru_counter[index][i] <= 0;
              end
              else begin
                lru_counter[index][i] <= lru_counter[index][i] < MAX_LRU_COUNT ? lru_counter[index][i] + 1 : MAX_LRU_COUNT;
              end
            end
            // if you modify cache, set dirty_bit = 1
            if(mem_write) begin
              dirty_bit[index][matching_way] <= 1;  // if miss-write, set dirty bit
            end
          end         
        end
        WRITEBACK: begin
          // 뭘 할 필요가 없는 것 같음
        end
        ALLOCATE: begin
          // todo: find a victim way
          victim <= 0;  // for direct-mapped, victim is always 0
          // current_max_lru_cnt <= 0;  // for a-way, find maximum lru value block and set it as victim
          // flag <= 0;
          // for(i=0; i<NUM_WAYS; i=i+1) begin
          //   if(!valid_bit[index][i]) begin
          //     victim <= i;  // if there is an empty way, use it as victim
          //     flag <= 1;
          //   end
          //   else if(!flag && lru_counter[index][i] > current_max_lru_cnt) begin
          //     victim <= i;  // if all ways are valid, use the least recently used way as victim
          //     current_max_lru_cnt <= lru_counter[index][i];
          //   end
          // end

          data_bank[index][victim][offset[3:2]*32 +: 32] <= data_mem_dout;
          tag_bank[index][victim] <= tag;
          valid_bit[index][victim] <= 1;
          dirty_bit[index][victim] <= 0;
          lru_counter[index][victim] <= 0;
        end
      endcase
    state <= next_state;
    end
  end
endmodule
