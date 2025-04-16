`include "opcodes.v"
`include "alu_func.v"
module ALUControlUnit(

    input [3:0] functs,             // (that bit from funct7), (funct3)
    input [6:0] opcode,             // opcode
    input [1:0] ALUOp,              // From control unit
    output reg [3:0] ALUControl     // To ALU.
);
    // Functionality
    // ALUOp = 00 then addition.
    // ALUOp = 01 then branch.
    // ALUOp = 10 then do what funct tells us to.  
    always @(*) begin
        case (ALUOp)
            2'b00: ALUControl = `FUNC_ADD;
            2'b01: begin
                case(functs[2:0])
                    `FUNCT3_BEQ: ALUControl = `FUNC_BEQ;
                    `FUNCT3_BNE: ALUControl = `FUNC_BNE;
                    `FUNCT3_BLT: ALUControl = `FUNC_BLT;
                    `FUNCT3_BGE: ALUControl = `FUNC_BGE;
                    default: ALUControl = 4'b0000;
                endcase
            end
            2'b10: begin
                case(functs[2:0])
                    `FUNCT3_ADD: begin
                        if (opcode == `ARITHMETIC_IMM || functs[3] == 0) 
                            ALUControl = `FUNC_ADD;
                        else
                            ALUControl = `FUNC_SUB;
                    end
                    `FUNCT3_SLL: ALUControl = `FUNC_LLS;
                    `FUNCT3_SRL: begin
                        if (functs[3]) // funct7 bit
                            ALUControl = `FUNC_ARS;
                        else
                            ALUControl = `FUNC_LRS;
                    end
                    `FUNCT3_XOR: ALUControl = `FUNC_XOR;
                    `FUNCT3_OR:  ALUControl = `FUNC_OR;
                    `FUNCT3_AND: ALUControl = `FUNC_AND;
                    default: ;
                endcase
            end
            default: ALUControl = 4'b0000;
        endcase
    end

endmodule
