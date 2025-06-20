`include "CLOG2.v"
module A_way_Cache #(parameter LINE_SIZE = 16,
               parameter NUM_SETS = 8, /* 16 for direct-mapped, 8 for 2-way ~ */
               parameter NUM_WAYS = 2 /* 1 for direct-mapped, 2 for 2-way ~ */) (
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
  localparam INDEX_BITS = `CLOG2(NUM_SETS);  // 3
  localparam TAG_BITS = 32 - OFFSET_BITS - INDEX_BITS;  // 25

  localparam IDLE          = 0,  // states for FSM
             COMPARE_TAG   = 1,
             WRITEBACK     = 2,
             ALLOCATE      = 3;



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
  reg lru [NUM_SETS-1:0];  // for 2-way

  reg data_mem_is_input_valid, data_mem_read, data_mem_write;
  reg [31:0] data_mem_addr;
  reg [LINE_SIZE * 8 - 1:0] data_mem_din;  
  
  reg reg2cache, mem2cache, lru_update;  // cache control signals

  reg matching_way;  // for 2-way
  assign matching_way = (tag_bank[index][1] == tag);
  integer i, j;

  assign is_ready = (state == COMPARE_TAG && is_hit); 
  assign is_output_valid = (state == COMPARE_TAG);
  assign dout = data_bank[index][matching_way][offset[3:2]*32 +: 32];  
  assign is_hit = (valid_bit[index][matching_way] && tag_bank[index][matching_way] == tag);

  // Instantiate data memory
  DataMemory #(.BLOCK_SIZE(LINE_SIZE)) data_mem(
    .reset(reset),
    .clk(clk),

    .is_input_valid(data_mem_is_input_valid),
    .addr(data_mem_addr >> 4),        // NOTE: address must be shifted by CLOG2(LINE_SIZE)
    .mem_read(data_mem_read),
    .mem_write(data_mem_write),
    .din(data_mem_din),

    // is output from the data memory valid?
    .is_output_valid(is_data_mem_output_valid),
    .dout(data_mem_dout),
    // is data memory ready to accept request?
    .mem_ready(is_data_mem_ready)
  );
 // Calculate DataMemory's inputs 
  always @(*) begin
    data_mem_is_input_valid = 0;
    data_mem_addr = 0;
    data_mem_read = 0;
    data_mem_write = 0;
    data_mem_din = 0;

    lru_update = 0;
    reg2cache = 0;
    mem2cache = 0;

    case(state)
      IDLE: begin
      end
      COMPARE_TAG: begin
        if(is_hit) begin
          if(lru[index] == matching_way) begin
            lru_update = 1;
          end

          if(mem_write) begin
            reg2cache = 1;  // data mem -> cache
          end
        end
        else begin
          if(next_state == ALLOCATE) begin
            data_mem_is_input_valid = 1;
            data_mem_addr = addr;  // allocate the block
            data_mem_read = 1;
          end
          else if(next_state == WRITEBACK) begin
            data_mem_is_input_valid = 1;
            data_mem_addr = {tag_bank[index][lru[index]], index, 4'b0000}; // write back the dirty block
            data_mem_din = data_bank[index][lru[index]];
            data_mem_write = 1;
          end
        end
      end
      WRITEBACK: begin
        if(next_state == ALLOCATE) begin
          data_mem_is_input_valid = 1;
          data_mem_read = 1;
          data_mem_addr = addr; // write back the dirty block
        end
      end
      ALLOCATE: begin
        if(next_state == COMPARE_TAG) begin
          mem2cache = 1;  // data mem -> cache
          // lru_update = 1;
        end
      end
      default: begin
        data_mem_is_input_valid = 0;
        data_mem_addr = 0;
        data_mem_read = 0;
        data_mem_write = 0;
        data_mem_din = 0;
        lru_update = 0;
        reg2cache = 0;
        mem2cache = 0;
      end
    endcase
  end
  // ---------- State transition ----------
  always @(posedge clk) begin
    if (reset) begin
      state <= IDLE;
    end
    else begin
      state <= next_state;
    end
  end

  always @(*) begin
    case (state)
      IDLE: begin
        if(is_input_valid) begin
          next_state = COMPARE_TAG;
        end
        else begin
          next_state = IDLE;
        end
      end
      COMPARE_TAG: begin
        if(is_hit) begin
          next_state = IDLE;
        end
        else if(dirty_bit[index][lru[index]]) begin 
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
        else begin
          next_state = WRITEBACK;
        end
      end
      ALLOCATE: begin
        if(is_data_mem_ready) begin
          next_state = COMPARE_TAG;
        end
        else begin
          next_state = ALLOCATE;
        end
      end
      default: begin
        next_state = IDLE;
      end
    endcase
  end
 

  // ---------- Update Cache ----------
  always @(posedge clk) begin
    if(reset) begin
      for(i = 0; i < NUM_SETS; i = i + 1) begin
        for(j = 0; j < NUM_WAYS; j = j + 1)begin
          tag_bank[i][j] <= 0;
          data_bank[i][j] <= 0;
          valid_bit[i][j] <= 0;
          dirty_bit[i][j] <= 0;
        end
        lru[i] <= 0;
      end
    end
    else begin
      if(lru_update) begin
        lru[index] <= ~lru[index];  
      end
      if(reg2cache) begin
        data_bank[index][matching_way][ offset[3:2]*32 +: 32 ] <= din;
        dirty_bit[index][matching_way] <= 1;  
      end
      if(mem2cache) begin
        data_bank[index][lru[index]] <= data_mem_dout;
        tag_bank[index][lru[index]] <= tag;
        valid_bit[index][lru[index]] <= 1;
        dirty_bit[index][lru[index]] <= 0;  
      end
      
    end
  end
endmodule
