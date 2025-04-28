`include "opcodes.v"
module StallDetection(
    input [4:0] ID_rs1,
    input [4:0] ID_rs2,
    input [6:0] ID_opcode,
    input [4:0] EX_rd,
    input EX_reg_write,
    input [4:0] MEM_rd,
    input MEM_reg_write,
    output reg is_stall
    );

    wire rs1_and_rs2_conditions;
    wire rs1_conditions;

    wire use_rs1, use_rs2;
    // wire stall_by_ex, stall_by_mem;
    wire stall_by_ecall;  // from EX
    wire stall_by_mem;


    assign rs1_and_rs2_conditions = (ID_opcode == `ARITHMETIC) || (ID_opcode == `STORE);
    assign rs1_conditions = (ID_opcode == `ARITHMETIC_IMM) || (ID_opcode == `LOAD) || (ID_opcode == `ECALL);

    assign use_rs1 = (rs1_and_rs2_conditions || rs1_conditions) && (ID_rs1 != 5'b0);
    assign use_rs2 = rs1_and_rs2_conditions && (ID_rs2 != 5'b0);

    // assign stall_by_ex = ((ID_rs1 == EX_rd) && use_rs1 && EX_reg_write) ||
    //                          ((ID_rs2 == EX_rd) && use_rs2 && EX_reg_write);
    assign stall_by_ecall = (ID_opcode == `ECALL) && (ID_rs1 == EX_rd && EX_reg_write) && (EX_rd != 5'b0);
    assign stall_by_mem = ((ID_rs1 == MEM_rd) && use_rs1 && MEM_reg_write) ||
                              ((ID_rs2 == MEM_rd) && use_rs2 && MEM_reg_write);

    always @(*) begin
        if (stall_by_ecall || stall_by_mem) begin
            is_stall = 1'b1;
        end
        else begin
            is_stall = 1'b0;
        end
    end
endmodule
