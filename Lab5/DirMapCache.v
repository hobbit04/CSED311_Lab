`include "CLOG2.v"
module DirMapCache #(parameter LINE_SIZE = 16,
               parameter NUM_SETS = 16 /* 16 for direct-mapped, 4 for 4-way ~ */
               ) (
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

  // Wire declarations
  wire is_data_mem_ready, is_data_mem_output_valid;
  wire [LINE_SIZE * 8 - 1:0] data_mem_dout;
  wire [OFFSET_BITS-1:0] offset = addr[OFFSET_BITS-1:0];
  wire [INDEX_BITS-1:0]  index  = addr[OFFSET_BITS +: INDEX_BITS];
  wire [TAG_BITS-1:0]    tag    = addr[31:OFFSET_BITS+INDEX_BITS];
  
  // Reg declarations
  // You might need registers to keep the status.
  reg [1:0] state, next_state;

  reg [TAG_BITS-1:0]    tag_bank  [NUM_SETS-1:0];
  reg [LINE_SIZE*8-1:0] data_bank [NUM_SETS-1:0];
  reg valid_bit [NUM_SETS-1:0];
  reg dirty_bit [NUM_SETS-1:0];

  // DataMemory의 입력으로 들어갈 레지스터들을 따로 선언
  reg data_mem_is_input_valid, data_mem_read, data_mem_write;
  reg [31:0] data_mem_addr;
  reg [LINE_SIZE * 8 - 1:0] data_mem_din;  
 
  integer i, j;

  assign is_ready = (next_state == IDLE); 
  assign is_output_valid = (state == COMPARE_TAG && next_state == IDLE);
  assign dout = data_bank[index][offset[3:2]*32 +: 32];  
  assign is_hit = (valid_bit[index] && tag_bank[index] == tag);

  // ---------- Data Memory ----------
  DataMemory #(.BLOCK_SIZE(LINE_SIZE)) data_mem(
    .reset(reset),
    .clk(clk),

    .is_input_valid(data_mem_is_input_valid),
    .addr(data_mem_addr),        // NOTE: address must be shifted by CLOG2(LINE_SIZE)
    .mem_read(data_mem_read),
    .mem_write(data_mem_write),
    .din(data_mem_din),

    // is output from the data memory valid?
    .is_output_valid(is_data_mem_output_valid),
    .dout(data_mem_dout),
    // is data memory ready to accept request?
    .mem_ready(is_data_mem_ready)
  );

  always @(*) begin
    data_mem_is_input_valid = 0;
    data_mem_addr = 0;
    data_mem_read = 0;
    data_mem_write = 0;
    data_mem_din = 0;
    case(state)
      IDLE: begin
      end
      COMPARE_TAG: begin
      end
      WRITEBACK: begin
        data_mem_is_input_valid = 1;
        data_mem_write = 1;
        data_mem_addr = {tag_bank[index], index, 4'b0000}; // write back the dirty block
        data_mem_din = data_bank[index];
      end
      ALLOCATE: begin
        data_mem_is_input_valid = 1;
        data_mem_addr = addr;
        data_mem_read = 1;
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
      end
      COMPARE_TAG: begin
        if(is_hit) begin
          next_state = IDLE;
        end
        else if(dirty_bit[index]) begin 
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
        tag_bank[i] <= 0;
        data_bank[i] <= 0;
        valid_bit[i] <= 0;
        dirty_bit[i] <= 0;
      end
    end
    else begin
      case(state)
        IDLE: begin
        end
        COMPARE_TAG: begin
          if(is_hit && mem_write) begin
            data_bank[index][ offset[3:2]*32 +: 32 ] <= din;
            dirty_bit[index] <= 1;  // if miss-write, set dirty bit
          end         
        end
        WRITEBACK: begin
        end
        ALLOCATE: begin
          if(next_state == COMPARE_TAG) begin
            data_bank[index] <= data_mem_dout;
            tag_bank[index] <= tag;
            valid_bit[index] <= 1;
            dirty_bit[index] <= 0;
          end
        end
      endcase

    end
  end


endmodule
