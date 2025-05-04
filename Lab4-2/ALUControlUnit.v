`include "opcodes.v"
`include "alu_func.v"

module ALUControlUnit(
    input [3:0] functs,             // (that bit from funct7), (funct3)
    input [1:0] alu_op,             // From control unit
    output reg [3:0] alu_control    // To ALU.
    );
    
    // Functionality
    // alu_op = 00 then ALU R-type operation.
    // alu_op = 01 then ALU I-type operation.
    // alu_op = 10 then branch.
    // alu_op = 11 then JAL/JALR.
    always @(*) begin
        case (alu_op)
            2'b00, 2'b01: begin
                case(functs[2:0])
                    `FUNCT3_ADD: begin
                        if (functs[3] && alu_op == 2'b00)
                            alu_control = `ALU_SUB;
                        else
                            alu_control = `ALU_ADD;
                    end
                    `FUNCT3_SLL: alu_control = `ALU_SLL;
                    `FUNCT3_SLT: alu_control = `ALU_SLT;
                    `FUNCT3_SLTU: alu_control = `ALU_SLTU;
                    `FUNCT3_XOR: alu_control = `ALU_XOR;
                    `FUNCT3_SRL: begin
                        if (functs[3])
                            alu_control = `ALU_SRA;
                        else
                            alu_control = `ALU_SRL;
                    end
                    `FUNCT3_OR:  alu_control = `ALU_OR;
                    `FUNCT3_AND: alu_control = `ALU_AND;
                    default: alu_control = 4'b0000;
                endcase
            end
            2'b10: begin
                case(functs[2:0])
                    `FUNCT3_BEQ: alu_control = `ALU_BEQ;
                    `FUNCT3_BNE: alu_control = `ALU_BNE;
                    `FUNCT3_BLT: alu_control = `ALU_BLT;
                    `FUNCT3_BGE: alu_control = `ALU_BGE;
                    `FUNCT3_BLTU: alu_control = `ALU_BLTU;
                    `FUNCT3_BGEU: alu_control = `ALU_BGEU;
                    default: alu_control = 4'b0000;
                endcase
            end
            2'b11: alu_control = `ALU_ADD;
        default: alu_control = 4'b0000;
        endcase
    end
endmodule
