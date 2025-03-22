`include "alu_func.v"
module alu_control_unit(
    input [2:0] funct3,
    input [6:0] funct7,
    input [6:0] opcode,
    output reg [3:0] alu_op
);

    always @(*) begin
        case(opcode) 
            `ARITHMETIC : begin 
                case(funct3) 
                    `FUNCT3_ADD : alu_op = (funct7 == `FUNCT7_SUB) ? `FUNC_SUB : `FUNC_ADD;
                    `FUNCT3_SLL : alu_op = `FUNC_LLS;
                    `FUNCT3_XOR : alu_op = `FUNC_XOR;
                    `FUNCT3_AND : alu_op = `FUNC_AND;
                    `FUNCT3_OR : alu_op = `FUNC_OR;
                    `FUNCT3_SRL : alu_op = (funct7 == `FUNCT7_SUB) ? `FUNC_ARS : `FUNC_LRS;
                    default : alu_op = `FUNC_ZERO;
                endcase
            end
            `ARITHMETIC_IMM : begin 
                case(funct3)
                    `FUNCT3_ADD : alu_op = `FUNC_ADD;
                    `FUNCT3_SLL : alu_op = `FUNC_LLS;
                    `FUNCT3_XOR : alu_op = `FUNC_XOR;
                    `FUNCT3_OR : alu_op = `FUNC_OR;
                    `FUNCT3_AND : alu_op = `FUNC_AND;
                    `FUNCT3_SRL : alu_op = (funct7 == `FUNCT7_SUB) ? `FUNC_ARS : `FUNC_LRS;
                    default : alu_op = `FUNC_ZERO;
                endcase
            end
            `LOAD, `STORE, `JALR, `JAL: begin 
                assign alu_op = `FUNC_ADD;
                // case(FUNCT3)
                //     `FUNCT3_LW : alu_op = `FUNC_ADD;
                //     `FUNCT3_SW : alu_op = `FUNC_ADD;
                // endcase
            end
            `BRANCH : begin 
                case(funct3)
                    `FUNCT3_BEQ : alu_op = `FUNC_BEQ;
                    `FUNCT3_BNE : alu_op = `FUNC_BNE;
                    `FUNCT3_BLT : alu_op = `FUNC_BLT;
                    `FUNCT3_BGE : alu_op = `FUNC_BGE;
                    default : alu_op = `FUNC_ZERO;
                endcase
            end
            default : alu_op = `FUNC_ZERO;
        
        endcase
    end
endmodule
