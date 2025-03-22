module alu_control_unit(
    input [31:0] part_of_inst,
    output [3:0] alu_op
);
    always @(*) begin
        reg [3:0] FUNCT3 = part_of_inst[14:12];
        reg [6:0] FUNCT7 = part_of_inst[31:25];
        reg [6:0] OPCODE = part_of_inst[6:0];
        
        case(OPCODE) 
            `ARITHMETIC : begin
                case(FUNCT3) 
                    `FUNCT3_ADD : alu_op = (FUNCT7 == `FUNCT7_SUB) ? `FUNC_SUB : `FUNC_ADD;
                    `FUNCT3_SLL : alu_op = `FUNC_LLS;
                    `FUNCT3_XOR : alu_op = `FUNC_XOR;
                    `FUNCT3_OR : alu_op = `FUNC_OR;
                    `FUNCT3_AND : alu_op = `FUNC_AND;
                    `FUNCT3_SRL : alu_op = (`FUNCT7 == `FUNCT7_SUB) ? `FUNC_ARS : `FUNC_LRS;
                endcase
            end
            `ARITHMETIC_IMM : begin
                case(FUNCT3)
                    `FUNCT3_ADD : alu_op = `FUNC_ADD;
                    `FUNCT3_SLL : alu_op = `FUNC_LLS;
                    `FUNCT3_XOR : alu_op = `FUNC_XOR;
                    `FUNCT3_OR : alu_op = `FUNC_OR;
                    `FUNCT3_AND : alu_op = `FUNC_AND;
                    `FUNCT3_SRL : alu_op = (`FUNCT7 == `FUNCT7_SUB) ? `FUNC_ARS : `FUNC_LRS;
                endcase
            end
            `LOAD, `STORE, `JALR, `JAL: begin
                alu_op = `FUNC_ADD;
                // case(FUNCT3)
                //     `FUNCT3_LW : alu_op = `FUNC_ADD;
                //     `FUNCT3_SW : alu_op = `FUNC_ADD;
                // endcase
            end
            `BRANCH : begin
                case(FUNCT3)
                    `FUNCT3_BEQ : alu_op = `FUNC_SUB;
                    `FUNCT3_BNE : alu_op = `FUNC_SUB;
                    `FUNCT3_BLT : alu_op = `FUNC_SUB;
                    `FUNCT3_BGE : alu_op = `FUNC_SUB;
                endcase
            end
            
        endcase
    end
endmodule