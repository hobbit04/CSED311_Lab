`include "CLOG2.v"
module Cache #(parameter LINE_SIZE = 16,
               parameter NUM_SETS = 16 /* 16 for direct-mapped, 4 for 4-way ~ */
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
  localparam INDEX_BITS = `CLOG2(NUM_SETS);  // 8
  localparam TAG_BITS = 32 - OFFSET_BITS - INDEX_BITS;  // 20

  localparam IDLE          = 0,  // states for FSM
             COMPARE_TAG   = 1,
             SELECT_VICTIM = 2,
             WRITEBACK     = 3,
             ALLOCATE      = 4;

  // Wire declarations
  wire is_data_mem_ready;

  reg [OFFSET_BITS-1:0] offset;
  reg [INDEX_BITS-1:0]  index;
  reg [TAG_BITS-1:0]    tag; 
  // Reg declarations
  // You might need registers to keep the status.
  reg [2:0] state, next_state;

  reg [TAG_BITS-1:0]    tag_bank  [NUM_SETS-1:0][NUM_WAYS-1:0];
  reg [LINE_SIZE*8-1:0] data_bank [NUM_SETS-1:0][NUM_WAYS-1:0];
  reg valid_bit [NUM_SETS-1:0][NUM_WAYS-1:0];
  reg dirty_bit [NUM_SETS-1:0][NUM_WAYS-1:0];

  // reg [`CLOG2(NUM_WAYS)-1:0] lru_counter [NUM_SETS-1:0][NUM_WAYS-1:0];  // No need when using direct-mapped cache
  integer i;

  assign is_ready = is_data_mem_ready;

  // todo: Parse the address to get the tag, index, and offset

  always @(posedge clk) begin
    if (reset) 
      state <= IDLE;
    else 
      state <= next_state;
  end

  always @(*) begin
    case (state) 
      IDLE: begin
        is_ready = 1;
        if(is_input_valid) begin
          offset = addr[OFFSET_BITS-1:0];
          index  = addr[OFFSET_BITS + INDEX_BITS - 1 : OFFSET_BITS];
          tag    = addr[31 : OFFSET_BITS + INDEX_BITS];
          next_state = COMPARE_TAG;
        end

      end
      COMPARE_TAG: begin
        for(i = 0; i<NUM_WAYS; i = i + 1) begin
          if (tag_bank[index][i] == tag && valid_bit[index][i]) begin
            is_hit = 1;
          end
          if (is_hit && mem_write) begin

          end
          else if (is_hit && mem_read) begin
          end
        end
        
      end
      SELECT_VICTIM: begin
      end
      WRITEBACK: begin
      end
      ALLOCATE: begin
      end
    endcase
  end
  // Instantiate data memory
  DataMemory #(.BLOCK_SIZE(LINE_SIZE)) data_mem(
    .reset(reset),
    .clk(clk),

    .is_input_valid(is_input_valid),
    .addr(addr >> `CLOG2(LINE_SIZE)),        // NOTE: address must be shifted by CLOG2(LINE_SIZE)
    .mem_read(mem_read),
    .mem_write(mem_write),
    .din(din),

    // is output from the data memory valid?
    .is_output_valid(),
    .dout(),
    // is data memory ready to accept request?
    .mem_ready(is_data_mem_ready)
  );
endmodule
