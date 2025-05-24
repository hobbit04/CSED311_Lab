module InstMemory #(parameter MEM_DEPTH = 16384) (input reset,
                                                  input clk,
                                                  input [31:0] addr,   // address of the instruction memory
                                                  output [31:0] dout); // instruction at addr
  integer i;
  // Instruction memory
  reg [31:0] mem[0:MEM_DEPTH - 1];
  // Do not touch imem_addr
  wire [31:0] imem_addr;
  assign imem_addr = {addr >> 2};

  // Asynchronously read instruction from the memory 
  assign dout = mem[imem_addr];

  // Initialize instruction memory (do not touch except path)
  always @(posedge clk) begin
    if (reset) begin
      for (i = 0; i < MEM_DEPTH; i = i + 1)
        // DO NOT TOUCH COMMENT BELOW
        /* verilator lint_off BLKSEQ */
        mem[i] = 32'b0;
        /* verilator lint_on BLKSEQ */
        // DO NOT TOUCH COMMENT ABOVE
      // Provide path of the file including instructions with binary format
      $readmemh("./student_tb_Lab4/basic_mem.txt", mem);
      // $readmemh("./student_tb_Lab4/ifelse_mem.txt", mem);
      // $readmemh("./student_tb_Lab4/loop_mem.txt", mem);
      // $readmemh("./student_tb_Lab4/non-controlflow_mem.txt", mem);
      // $readmemh("./student_tb_Lab4/recursive_mem.txt", mem);

      // $readmemh("./student_tb_Lab5/naive_matmul_unroll.mem", mem);
      // $readmemh("./student_tb_Lab5/opt_matmul_unroll.mem", mem);
    end
  end

endmodule
