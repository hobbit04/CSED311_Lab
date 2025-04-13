// Submit this file with other files you created.
// Do not touch port declarations of the module 'CPU'.

// Guidelines
// 1. It is highly recommened to `define opcodes and something useful.
// 2. You can modify the module.
// (e.g., port declarations, remove modules, define new modules, ...)
// 3. You might need to describe combinational logics to drive them into the module (e.g., mux, and, or, ...)
// 4. `include files if required

module cpu(input reset,       // positive reset signal
           input clk,         // clock signal
           output is_halted,
           output [31:0]print_reg[0:31]
           ); // Whehther to finish simulation
  /***** Wire declarations *****/
  
  // Control wires
  wire PCWriteNotCond;
  wire PCWrite;
  wire IorD;
  wire MemRead;
  wire MemWrite;
  wire MemtoReg;
  wire IRWrite;
  wire PCSource;
  wire [1:0] ALUOp;
  wire [1:0] ALUSrcB;
  wire ALUSrcA;
  wire RegWrite;
  
  // register writeback data
  wire WriteData;
  
  // memory & register file outputs
  wire [31:0] MemData;
  wire [31:0] regA_value;
  wire [31:0] regB_value;

  wire [31:0] immediate;

  wire [31:0] current_pc;
  wire [31:0] next_pc;
  wire [31:0] addr;

  wire [31:0] alu_in_1;
  wire [31:0] alu_in_2;
  wire [3:0] ALUControl;
  wire [31:0] alu_result;
  wire alu_bcond;

  wire is_ecall;
  wire ecall_reg_cond;

  assign is_halted = is_ecall && ecall_reg_cond;
  assign next_pc = PCSource ? ALUOut : alu_result;
  assign addr = IorD ? ALUOut : current_pc;
  assign WriteData = MemToReg ? MDR : ALUOut;
  assign alu_in_1 = ALUSrcA ? A : current_pc;
  assign alu_in_2 = ALUSrcB[1] ? immediate : (ALUSrcB[0] ? 4 : B);

  /***** Register declarations *****/
  reg [31:0] IR; // instruction register
  reg [31:0] MDR; // memory data register
  reg [31:0] A; // Read 1 data register
  reg [31:0] B; // Read 2 data register
  reg [31:0] ALUOut; // ALU output register
  // Do not modify and use registers declared above.

  // Logic to update all the latches
  always @(posedge clk) begin
    A <= regA_value;
    B <= regB_value;
    MDR <= MemData;
    ALUOut <= alu_result;
    if (IRWrite == 1) begin
      IR <= MemData;
    end
  end



  // ---------- Update program counter ----------
  // PC must be updated on the rising edge (positive edge) of the clock.
  PC pc(
    .reset(reset),            // input (Use reset to initialize PC. Initial value must be 0)
    .clk(clk),                // input
    .next_pc(next_pc),        // input
    .current_pc(current_pc)   // output
  );

  // ---------- Register File ----------
  RegisterFile reg_file(
    .reset(reset),                    // input
    .clk(clk),                        // input
    .rs1(IR[19:15]),                  // input
    .rs2(IR[24:20]),                  // input
    .rd(IR[11:7]),                    // input
    .rd_din(WriteData),               // input
    .write_enable(RegWrite),          // input
    .ecall_reg_cond(ecall_reg_cond)   // output (ecall check)
    .rs1_dout(regA_value),            // output
    .rs2_dout(regB_value),            // output
    .print_reg(print_reg)             // output (TO PRINT REGISTER VALUES IN TESTBENCH)
  );

  // ---------- Memory ----------
  Memory memory(
    .reset(reset),            // input
    .clk(clk),                // input
    .addr(addr),              // input
    .din(B),                  // input
    .mem_read(MemRead),       // input
    .mem_write(MemWrite),     // input
    .dout(MemData)            // output
  );

  // ---------- Control Unit ----------
  ControlUnit ctrl_unit(
    .reset(reset),                      // input
    .clk(clk),                          // input
    .opcode(IR[6:0]),                   // input
    .PCWriteNotCond(PCWriteNotCond),    // output
    .PCWrite(PCWrite),                  // output
    .IorD(IorD),                        // output
    .MemRead(MemRead),                  // output
    .MemWrite(MemWrite),                // output
    .MemtoReg(MemtoReg),                // output
    .IRWrite(IRWrite),                  // output
    .PCSource(PCSource),                // output
    .ALUOp(ALUOp),                      // output
    .ALUSrcB(ALUSrcB),                  // output
    .ALUSrcA(ALUSrcA),                  // output
    .RegWrite(RegWrite),                // output
    .is_ecall(is_ecall)                 // output (ecall inst)
  );

  // ---------- Immediate Generator ----------
  ImmediateGenerator imm_gen(
    .IR(IR),          // input
    .imm_gen_out(immediate)    // output
  );

  // ---------- ALU Control Unit ----------
  ALUControlUnit alu_ctrl_unit(
    .part_of_inst({IR[30], IR[14:12]}),   // input
    .ALUOp(ALUOp),                        // input
    .ALUControl(ALUControl)               // output
  );

  // ---------- ALU ----------
  ALU alu(
    .ALUControl(ALUControl),  // input
    .alu_in_1(alu_in_1),      // input  
    .alu_in_2(alu_in_2),      // input
    .alu_result(alu_result),  // output
    .alu_bcond(alu_bcond)     // output
  );

endmodule
