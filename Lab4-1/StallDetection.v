`include "opcodes.v"
module StallDetection(
    input [4:0] ID_rs1,
    input [4:0] ID_rs2,
    input [6:0] ID_opcode,
    input [4:0] EX_rd,
    input EX_mem_read,
    input EX_reg_write,
    input [4:0] MEM_rd,
    input MEM_mem_read,
    input MEM_reg_write,
    output reg is_stall
    );

    wire rs1_and_rs2_conditions;
    wire rs1_conditions;

    wire use_rs1, use_rs2;
    wire stall_by_load, stall_by_ecall;


    // for use_rs1 and use_rs2
    assign rs1_and_rs2_conditions = (ID_opcode == `ARITHMETIC) || (ID_opcode == `STORE);
    assign rs1_conditions = (ID_opcode == `ARITHMETIC_IMM) || (ID_opcode == `LOAD);
    assign use_rs1 = (rs1_and_rs2_conditions || rs1_conditions) && (ID_rs1 != 5'b0);
    assign use_rs2 = rs1_and_rs2_conditions && (ID_rs2 != 5'b0);

    // EX stage: stall if load
    assign stall_by_load = ((ID_rs1 == EX_rd) && use_rs1 && EX_mem_read) ||
                           ((ID_rs2 == EX_rd) && use_rs2 && EX_mem_read);

    // MEM stage: just stall if load; EX stage: stall for any write
    assign stall_by_ecall = ((ID_opcode == `ECALL) && (EX_rd == 5'b10001) && (EX_reg_write)) ||
                            ((ID_opcode == `ECALL) && (MEM_rd == 5'b10001) && (MEM_mem_read));

    always @(*) begin
        if (stall_by_load || stall_by_ecall) begin
            is_stall = 1'b1;
        end
        else begin
            is_stall = 1'b0;
        end
    end
endmodule
