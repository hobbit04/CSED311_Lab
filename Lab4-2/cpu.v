// Submit this file with other files you created.
// Do not touch port declarations of the module 'CPU'.

// Guidelines
// 1. It is highly recommened to `define opcodes and something useful.
// 2. You can modify modules (except InstMemory, DataMemory, and RegisterFile)
// (e.g., port declarations, remove modules, define new modules, ...)
// 3. You might need to describe combinational logics to drive them into the module (e.g., mux, and, or, ...)
// 4. `include files if required

module cpu(input reset,       // positive reset signal
           input clk,         // clock signal
           output is_halted, // Whehther to finish simulation
           output [31:0]print_reg[0:31]); // Whehther to finish simulation
  
  
  /***** Wire declarations *****/
  wire is_stall;
  wire [1:0] forward_ecall;
  wire [1:0] forward_rs1;
  wire [1:0] forward_rs2;

  /***** IF Stage wires *****/
  wire [31:0] current_pc;
  wire [31:0] next_pc;
  wire [31:0] instruction;
  wire [31:0] predicted_next_pc;
  wire predicted_branch_taken;

  /***** ID Stage wires *****/
  // Control related
  wire is_jal;
  wire is_jalr;
  wire branch;
  wire pc_to_reg;
  wire mem_read;
  wire mem_to_reg;
  wire mem_write;
  wire alu_src;
  wire reg_write;
  wire [1:0] alu_op;
  wire is_ecall;
  wire halt_sim;
  // Non-control related
  wire [4:0] rs1_in;
  wire [31:0] rs1_data;
  wire [31:0] rs2_data;
  wire [31:0] imm_gen_out;
  wire [31:0] ecall_forward_data;

  /***** EX Stage wires *****/
  wire [3:0] alu_control;
  wire [31:0] alu_in_2;
  wire [31:0] alu_result;
  wire alu_bcond;
  wire [31:0] alu_forward_data_1;
  wire [31:0] alu_forward_data_2;
  wire actual_branch_taken;
  wire [31:0] branch_addr;
  wire [31:0] actual_addr;
  wire [31:0] addr_for_BTB;
  wire prediction_wrong;


  /***** MEM Stage wires *****/
  wire [31:0] mem_data;

  /***** WB Stage wires *****/
  wire [31:0] writeback_data;


  /***** Register declarations *****/
  // You need to modify the width of registers
  // In addition, 
  // 1. You might need other pipeline registers that are not described below
  // 2. You might not need registers described below

  /***** IF/ID pipeline registers *****/
  reg [31:0] IF_ID_inst;                // will be used in ID stage
  reg [31:0] IF_ID_pc;                  // will be used in EX stage (for branching)
  reg [31:0] IF_ID_predicted_next_pc;   // for prediction correctness check
  reg IF_ID_predicted_branch_taken;     // for prediction correctness check

  /***** ID/EX pipeline registers *****/
  // From the control unit
  reg [1:0] ID_EX_alu_op;   // will be used in EX stage
  reg ID_EX_alu_src;        // will be used in EX stage
  reg ID_EX_mem_write;      // will be used in MEM stage
  reg ID_EX_mem_read;       // will be used in MEM stage
  reg ID_EX_mem_to_reg;     // will be used in WB stage
  reg ID_EX_reg_write;      // will be used in WB stage
  reg ID_EX_is_halted;      // will be used in WB stage
  reg ID_EX_is_jal;         // will be used in EX stage (for branching)
  reg ID_EX_is_jalr;        // will be used in EX stage (for branching)
  reg ID_EX_branch;         // will be used in EX stage (for branching)
  reg ID_EX_pc_to_reg;      // will be used in WB stage (for jump instructions)
  // From others
  reg [31:0] ID_EX_rs1_data;
  reg [31:0] ID_EX_rs2_data;
  reg [31:0] ID_EX_imm;
  reg [3:0] ID_EX_ALU_ctrl_unit_input;
  reg [4:0] ID_EX_rs1;
  reg [4:0] ID_EX_rs2;
  reg [4:0] ID_EX_rd;
  reg [31:0] ID_EX_pc;      // will be used in EX stage (for branching)
  reg [31:0] ID_EX_predicted_next_pc;   // for prediction correctness check
  reg ID_EX_predicted_branch_taken;     // for prediction correctness check

  /***** EX/MEM pipeline registers *****/
  // From the control unit
  reg EX_MEM_mem_write;     // will be used in MEM stage
  reg EX_MEM_mem_read;      // will be used in MEM stage
  reg EX_MEM_mem_to_reg;    // will be used in WB stage
  reg EX_MEM_reg_write;     // will be used in WB stage
  reg EX_MEM_is_halted;     // will be used in WB stage
  reg EX_MEM_pc_to_reg;     // will be used in WB stage (for jump instructions)
  // From others
  reg [31:0] EX_MEM_alu_out;
  reg [31:0] EX_MEM_dmem_data;
  reg [4:0] EX_MEM_rd;
  reg [31:0] EX_MEM_pc_plus_4;

  /***** MEM/WB pipeline registers *****/
  // From the control unit
  reg MEM_WB_mem_to_reg;    // will be used in WB stage
  reg MEM_WB_reg_write;     // will be used in WB stage
  reg MEM_WB_is_halted;     // will be used in WB stage
  reg MEM_WB_pc_to_reg;     // will be used in WB stage (for jump instructions);
  // From others
  reg [31:0] MEM_WB_mem_to_reg_src_1;
  reg [31:0] MEM_WB_mem_to_reg_src_2;
  reg [4:0] MEM_WB_rd;
  reg [31:0] MEM_WB_pc_plus_4;





  /******* Stall & Data Forwarding *******/
    // ---------- Stall Detection ----------
  StallDetection stall_detection(
    .ID_rs1(rs1_in),                    // input
    .ID_rs2(IF_ID_inst[24:20]),         // input
    .ID_opcode(IF_ID_inst[6:0]),        // input
    .EX_rd(ID_EX_rd),                   // input
    .EX_mem_read(ID_EX_mem_read),       // input
    .EX_reg_write(ID_EX_reg_write),     // input
    .MEM_rd(EX_MEM_rd),                 // input
    .MEM_mem_read(EX_MEM_mem_read),     // input
    .MEM_reg_write(EX_MEM_reg_write),   // input
    .is_stall(is_stall)                 // output
  );
  
  // ---------- Forwarding Unit ----------
  ForwardingUnit forwarding_unit(
    .EX_rs1(ID_EX_rs1),                   // input
    .EX_rs2(ID_EX_rs2),                   // input
    .MEM_rd(EX_MEM_rd),                   // input
    .MEM_reg_write(EX_MEM_reg_write),     // input
    .WB_rd(MEM_WB_rd),                    // input
    .WB_reg_write(MEM_WB_reg_write),      // input
    .forward_ecall(forward_ecall),        // output
    .forward_rs1(forward_rs1),            // output
    .forward_rs2(forward_rs2)             // output
    );





  /******* IF STAGE *******/
  assign next_pc = prediction_wrong ? actual_addr : predicted_next_pc;

  // ---------- Branch Predictor ----------
  BranchPredictor branch_predictor(
    .reset(reset),                                    // input
	  .clk(clk),                                        // input
	  .pc_for_update(ID_EX_pc),                         // input (For updates)
	  .update_BTB(addr_for_BTB),                        // input (For updates)
	  .update_taken(actual_branch_taken),               // input (For updates)
	  .current_pc(current_pc),                          // input (For prediction generation)
	  .predicted_next_pc(predicted_next_pc),            // output (Prediction)
    .predicted_branch_taken(predicted_branch_taken)   // output (Prediction)
	);

  // ---------- Update program counter ----------
  // PC must be updated on the rising edge (positive edge) of the clock.
  PC pc(
    .reset(reset),            // input (Use reset to initialize PC. Initial value must be 0)
    .clk(clk),                // input
    .is_stall(is_stall),      // input
    .next_pc(next_pc),        // input
    .current_pc(current_pc)   // output
  );
  
  // ---------- Instruction Memory ----------
  InstMemory imem(
    .reset(reset),        // input
    .clk(clk),            // input
    .addr(current_pc),    // input
    .dout(instruction)    // output
  );

  // Update IF/ID pipeline registers here
  always @(posedge clk) begin 
    if (reset || prediction_wrong) begin
      IF_ID_inst <= 32'b0;
      IF_ID_pc <= 32'b0;
      IF_ID_predicted_next_pc <= 32'b0;
      IF_ID_predicted_branch_taken <= 1'b0;
    end
    else if (!is_stall) begin
      IF_ID_inst <= instruction;
      IF_ID_pc <= current_pc;
      IF_ID_predicted_next_pc <= predicted_next_pc;
      IF_ID_predicted_branch_taken <= predicted_branch_taken;
    end
  end





  /******* ID STAGE *******/
  assign rs1_in = is_ecall ? 5'b10001 : IF_ID_inst[19:15];
  assign halt_sim = is_ecall && (ecall_forward_data == 10);
  assign ecall_forward_data = forward_ecall[1] ? EX_MEM_alu_out :
                          forward_ecall[0] ? writeback_data :
                                           rs1_data;

  // ---------- Register File ----------
  RegisterFile reg_file (
    .reset(reset),                    // input
    .clk(clk),                        // input
    .rs1(rs1_in),                     // input
    .rs2(IF_ID_inst[24:20]),          // input
    .rd(MEM_WB_rd),                   // input
    .rd_din(writeback_data),          // input
    .write_enable(MEM_WB_reg_write),  // input
    .rs1_dout(rs1_data),              // output
    .rs2_dout(rs2_data),              // output
    .print_reg(print_reg)
  );

  // ---------- Control Unit ----------
  ControlUnit ctrl_unit (
    .opcode(IF_ID_inst[6:0]),   // input
    .is_jal(is_jal),            // output
    .is_jalr(is_jalr),          // output
    .branch(branch),            // output
    .pc_to_reg(pc_to_reg),      // output
    .mem_read(mem_read),        // output
    .mem_to_reg(mem_to_reg),    // output
    .mem_write(mem_write),      // output
    .alu_src(alu_src),          // output
    .reg_write(reg_write),      // output
    .alu_op(alu_op),            // output
    .is_ecall(is_ecall)         // output (ecall inst)
  );

  // ---------- Immediate Generator ----------
  ImmediateGenerator imm_gen(
    .instruction(IF_ID_inst),     // input
    .imm_gen_out(imm_gen_out)     // output
  );

  // Update ID/EX pipeline registers here
  always @(posedge clk) begin
    if (reset || prediction_wrong || is_stall) begin
      // Control values
      ID_EX_alu_src <= 1'b0;
      ID_EX_alu_op <= 2'b00;
      ID_EX_mem_read <= 1'b0;
      ID_EX_mem_write <= 1'b0;
      ID_EX_mem_to_reg <= 1'b0;
      ID_EX_reg_write <= 1'b0;
      ID_EX_is_halted <= 1'b0;
      ID_EX_is_jal <= 1'b0;
      ID_EX_is_jalr <= 1'b0;
      ID_EX_branch <= 1'b0;
      ID_EX_pc_to_reg <= 1'b0;
      // Non-control values
      ID_EX_rs1_data <= 32'b0;
      ID_EX_rs2_data <= 32'b0;
      ID_EX_imm <= 32'b0;
      ID_EX_ALU_ctrl_unit_input <= 4'b0;
      ID_EX_rs1 <= 5'b0;
      ID_EX_rs2 <= 5'b0;
      ID_EX_rd <= 5'b0;
      ID_EX_pc <= 32'b0;
      ID_EX_predicted_next_pc <= 32'b0;
      ID_EX_predicted_branch_taken <= 1'b0;
    end
    else begin
      // Control values
      ID_EX_alu_src <= alu_src;
      ID_EX_alu_op <= alu_op;
      ID_EX_mem_read <= mem_read;
      ID_EX_mem_to_reg <= mem_to_reg;
      ID_EX_is_halted <= halt_sim;
      ID_EX_pc_to_reg <= pc_to_reg;
      ID_EX_is_jal <= is_jal;
      ID_EX_is_jalr <= is_jalr;
      ID_EX_branch <= branch;
      ID_EX_mem_write <= mem_write;
      ID_EX_reg_write <= reg_write;
      // Non-control values
      ID_EX_rs1_data <= rs1_data;
      ID_EX_rs2_data <= rs2_data;
      ID_EX_imm <= imm_gen_out;
      ID_EX_ALU_ctrl_unit_input <= {IF_ID_inst[30], IF_ID_inst[14:12]};
      ID_EX_rs1 <= rs1_in;
      ID_EX_rs2 <= IF_ID_inst[24:20];
      ID_EX_rd <= IF_ID_inst[11:7];     
      ID_EX_pc <= IF_ID_pc;
      ID_EX_predicted_next_pc <= IF_ID_predicted_next_pc;
      ID_EX_predicted_branch_taken <= IF_ID_predicted_branch_taken;
    end
  end





  /******* EX STAGE *******/ 
  assign alu_forward_data_1 = forward_rs1[1] ? EX_MEM_alu_out :
                          forward_rs1[0] ? writeback_data :
                                           ID_EX_rs1_data;
  assign alu_forward_data_2 = forward_rs2[1] ? EX_MEM_alu_out :
                          forward_rs2[0] ? writeback_data :
                                           ID_EX_rs2_data;
  assign alu_in_2 = ID_EX_alu_src ? ID_EX_imm : alu_forward_data_2;

  // jalr will use alu_result
  // jal or branch will have pc + imm
  // all other will have pc+4 (enforced by actual_branch_taken being false)
  assign branch_addr = ID_EX_is_jalr ? alu_result : ID_EX_pc + ID_EX_imm;
  assign actual_branch_taken = ID_EX_is_jal || ID_EX_is_jalr || (alu_bcond && ID_EX_branch);
  assign actual_addr = actual_branch_taken ? branch_addr : ID_EX_pc + 4;
  
  assign prediction_wrong =
      (ID_EX_predicted_next_pc != 32'b0) &&
      (
          ID_EX_predicted_branch_taken != actual_branch_taken ||
          ID_EX_predicted_next_pc      != actual_addr
      ); 

  // Assumption: BTB doesn't store JALR values
  assign addr_for_BTB = (ID_EX_is_jal || ID_EX_branch) ? branch_addr : ID_EX_pc + 4;

  // ---------- ALU Control Unit ----------
  ALUControlUnit alu_ctrl_unit (
    .functs(ID_EX_ALU_ctrl_unit_input),   // input
    .alu_op(ID_EX_alu_op),                // input
    .alu_control(alu_control)             // output
  );

  // ---------- ALU ----------
  ALU alu (
    .alu_control(alu_control),            // input
    .alu_in_1(alu_forward_data_1),        // input  
    .alu_in_2(alu_in_2),                  // input
    .alu_result(alu_result),              // output
    .alu_bcond(alu_bcond)                 // output
  );

  // Update EX/MEM pipeline registers here
  always @(posedge clk) begin
    if (reset) begin
      // Control values
      EX_MEM_mem_write <= 1'b0;
      EX_MEM_mem_read <= 1'b0;
      EX_MEM_mem_to_reg <= 1'b0;
      EX_MEM_reg_write <= 1'b0;
      EX_MEM_is_halted <= 1'b0;
      EX_MEM_pc_to_reg <= 1'b0;
      // Non-control values
      EX_MEM_alu_out <= 32'b0;
      EX_MEM_dmem_data <= 32'b0;
      EX_MEM_rd <= 5'b0;
      EX_MEM_pc_plus_4 <= 32'b0;
    end
    else begin
      // Control values
      EX_MEM_mem_write <= ID_EX_mem_write;
      EX_MEM_mem_read <= ID_EX_mem_read;
      EX_MEM_mem_to_reg <= ID_EX_mem_to_reg;
      EX_MEM_reg_write <= ID_EX_reg_write;
      EX_MEM_is_halted <= ID_EX_is_halted;
      EX_MEM_pc_to_reg <= ID_EX_pc_to_reg;
      // Non-control values
      EX_MEM_alu_out <= alu_result;
      EX_MEM_dmem_data <= alu_forward_data_2;
      EX_MEM_rd <= ID_EX_rd;
      EX_MEM_pc_plus_4 <= ID_EX_pc + 4; 
    end
  end





  /******* MEM STAGE *******/

  // ---------- Data Memory ----------
  DataMemory dmem(
    .reset(reset),                  // input
    .clk(clk),                      // input
    .addr(EX_MEM_alu_out),          // input
    .din(EX_MEM_dmem_data),         // input
    .mem_read(EX_MEM_mem_read),     // input
    .mem_write(EX_MEM_mem_write),   // input
    .dout(mem_data)                 // output
  );

  // Update MEM/WB pipeline registers here
  always @(posedge clk) begin
    if (reset) begin
      MEM_WB_mem_to_reg <= 1'b0;
      MEM_WB_reg_write <= 1'b0;
      MEM_WB_is_halted <= 1'b0;
      MEM_WB_pc_to_reg <= 1'b0;
      // Non-control values
      MEM_WB_rd <= 5'b0;
      MEM_WB_mem_to_reg_src_1 <= 32'b0;
      MEM_WB_mem_to_reg_src_2 <= 32'b0;
      MEM_WB_pc_plus_4 <= 32'b0;
    end
    else begin
      // Control values
      MEM_WB_mem_to_reg <= EX_MEM_mem_to_reg;
      MEM_WB_reg_write <= EX_MEM_reg_write;
      MEM_WB_is_halted <= EX_MEM_is_halted;
      MEM_WB_pc_to_reg <= EX_MEM_pc_to_reg;
      // Non-control values
      MEM_WB_rd <= EX_MEM_rd;
      MEM_WB_mem_to_reg_src_1 <= EX_MEM_alu_out;
      MEM_WB_mem_to_reg_src_2 <= mem_data;
      MEM_WB_pc_plus_4 <= EX_MEM_pc_plus_4;
    end
  end





  /******* WB STAGE *******/
  assign is_halted = MEM_WB_is_halted;
  assign writeback_data = MEM_WB_pc_to_reg ? MEM_WB_pc_plus_4 : 
                         MEM_WB_mem_to_reg ? MEM_WB_mem_to_reg_src_2 :
                                             MEM_WB_mem_to_reg_src_1 ;
endmodule
