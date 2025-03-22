// Submit this file with other files you created.
// Do not touch port declarations of the module 'cpu'.

// Guidelines
// 1. It is highly recommened to `define opcodes and something useful.
// 2. You can modify the module.
// (e.g., port declarations, remove modules, define new modules, ...)
// 3. You might need to describe combinational logics to drive them into the module (e.g., mux, and, or, ...)
// 4. `include files if required

module cpu(input reset,                     // positive reset signal
           input clk,                       // clock signal
           output is_halted,                // Whehther to finish simulation
           output [31:0] print_reg [0:31]); // TO PRINT REGISTER VALUES IN TESTBENCH (YOU SHOULD NOT USE THIS)
  /***** Wire declarations *****/
  wire is_jal;
  wire is_jalr;
  wire branch;
  wire mem_read;
  wire mem_to_reg;
  wire mem_write;
  wire alu_src;
  wire write_enable;
  wire pc_to_reg;
  wire is_ecall;

  wire [31:0] instruction;
  wire [6:0] opcode;
  wire [2:0] funct3;
  wire [6:0] funct7;
  wire [4:0] rs1;
  wire [4:0] rs2;
  wire [4:0] rd;

  wire [3:0] alu_op;
  wire [31:0] alu_in_2;
  wire [31:0] alu_result;
  wire bcond;

  wire [31:0] rs1_data;
  wire [31:0] rs2_data;
  wire [31:0] rd_data;
  
  wire [31:0] mem_data;
  wire [31:0] writeback_data;

  wire [31:0] current_pc;
  wire [31:0] current_pc_plus_4;
  wire [31:0] next_pc;
  wire [31:0] branch_jal_address;

  wire [31:0] immediate;

  /***** Register declarations *****/
  assign current_pc_plus_4 = current_pc + 4;
  assign branch_jal_address = immediate + current_pc;

  assign rd_data = pc_to_reg ? current_pc_plus_4 : writeback_data;
  assign alu_in_2 = alu_src ? immediate : rs2_data;
  assign writeback_data = mem_to_reg ? mem_data : alu_result;

  assign is_halted = is_ecall && (print_reg[17] == 10);


  // ---------- Update program counter ----------
  // PC must be updated on the rising edge (positive edge) of the clock.
  pc pc(
    .reset(reset),                // input (Use reset to initialize PC. Initial value must be 0)
    .clk(clk),                    // input
    .next_pc(next_pc),            // input
    .current_pc(current_pc)       // output
  );

  calculate_next_pc calc_next_pc(
    .current_pc_plus_4(current_pc_plus_4),      // input
    .branch_jal_address(branch_jal_address),    // input
    .jalr_address(alu_result),                  // input
    .is_jalr(is_jalr),                          // input
    .is_jal(is_jal),                            // input
    .branch(branch),                            // input
    .bcond(bcond),                              // input
    .next_pc(next_pc)                           // output
  );
  
  // ---------- Instruction Memory ----------
  instruction_memory imem(
    .reset(reset),          // input
    .clk(clk),              // input
    .addr(current_pc),      // input
    .dout(instruction)      // output
  );

  // ---------- Parse Instructions ----------
  parse_instructions parse_inst (
    .instruction(instruction),        // input
    .opcode(opcode),                  // output
    .funct3(funct3),                  // output
    .funct7(funct7),                  // output
    .rs1(rs1),                        // output
    .rs2(rs2),                        // output
    .rd(rd)                           // output
  );


  // ---------- Register File ----------
  register_file reg_file (
    .reset (reset),                 // input
    .clk (clk),                     // input
    .rs1 (rs1),                     // input
    .rs2 (rs2),                     // input
    .rd (rd),                       // input
    .rd_din (rd_data),              // input
    .write_enable (write_enable),   // input
    .rs1_dout (rs1_data),           // output
    .rs2_dout (rs2_data),           // output
    .print_reg (print_reg)          // DO NOT TOUCH THIS
  );


  // ---------- Control Unit ----------
  control_unit ctrl_unit (
    .opcode(opcode),                // input
    .is_jal(is_jal),                // output
    .is_jalr(is_jalr),              // output
    .branch(branch),                // output
    .mem_read(mem_read),            // output
    .mem_to_reg(mem_to_reg),        // output
    .mem_write(mem_write),          // output
    .alu_src(alu_src),              // output
    .write_enable(write_enable),    // output
    .pc_to_reg(pc_to_reg),          // output
    .is_ecall(is_ecall)             // output (ecall inst)
  );

  // ---------- Immediate Generator ----------
  immediate_generator imm_gen(
    .instruction(instruction),      // input
    .imm_gen_out(immediate)         // output
  );

  // ---------- ALU Control Unit ----------
  alu_control_unit alu_ctrl_unit (
<<<<<<< HEAD
    .funct3(funct3),
    .funct7(funct7),
    .opcode(opcode),    // input
    .alu_op(alu_op)                 // output
  
=======
    .funct3(funct3),                  // input
    .funct7(funct7),                  // input
    .opcode(opcode),                  // input
    .alu_op(alu_op)                   // output
>>>>>>> refs/remotes/origin/main
  );

  // ---------- ALU ----------
  alu alu (
    .alu_op(alu_op),                // input
    .alu_in_1(rs1_data),            // input  
    .alu_in_2(alu_in_2),            // input
    .alu_result(alu_result),        // output
    .alu_bcond(bcond)               // output
  );

  // ---------- Data Memory ----------
  data_memory dmem(
    .reset (reset),                 // input
    .clk (clk),                     // input
    .addr (alu_result),             // input
    .din (rs2_data),                // input
    .mem_read (mem_read),           // input
    .mem_write (mem_write),         // input
    .dout (mem_data)                // output
  );


endmodule
