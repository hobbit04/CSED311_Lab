`include "opcodes.v"

module ControlUnit(
    input [6:0] opcode,
    output reg mem_read,
    output reg mem_to_reg,
    output reg mem_write,
    output reg alu_src,
    output reg reg_write,
    output reg [1:0] alu_op,
    output reg is_ecall,
    output reg is_jump
    );

   always @(*) begin
        mem_read = 1'b0;
        mem_to_reg = 1'b0;
        mem_write = 1'b0;
        alu_src = 1'b0;
        reg_write = 1'b0;
        alu_op = 2'b00;
        is_ecall = 1'b0;
        is_jump = 1'b0;
        case(opcode)
            `ARITHMETIC : begin
                reg_write = 1'b1;
                alu_op = 2'b00;
            end
            `ARITHMETIC_IMM : begin
                alu_src = 1'b1;
                alu_op = 2'b01;
                reg_write = 1'b1;
            end
            `LOAD : begin
                mem_read = 1'b1;
                mem_to_reg = 1'b1;
                alu_src = 1'b1;
                alu_op = 2'b11;
                reg_write = 1'b1;
            end
            `STORE : begin
                mem_write = 1'b1;
                alu_src = 1'b1;
                alu_op = 2'b11;
            end
            `ECALL : is_ecall = 1'b1;
            `JAL : is_jump = 1'b1;
            `JALR : is_jump = 1'b1;
            default : ;
        endcase
    end
endmodule
