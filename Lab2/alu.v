`include "alu_func.v"

module alu (input [3:0] alu_op,  
            input [2:0] funct3,
            input [31:0] alu_in_1,
            input [31:0] alu_in_2,
            output reg [31:0] alu_result,
            output reg alu_bcond);

    always @(*) begin
        case(alu_op) 
            `FUNC_ADD : alu_result = alu_in_1 + alu_in_2;
            `FUNC_SUB : begin
                alu_result = alu_in_1 - alu_in_2;
                case(funct3)
                    `FUNCT3_BEQ : alu_bcond = (alu_in_1 == alu_in_2);
                    `FUNCT3_BNE : alu_bcond = (alu_in_1 != alu_in_2);
                    `FUNCT3_BLT : alu_bcond = ($signed(alu_in_1) < $signed(alu_in_2));
                    `FUNCT3_BGE : alu_bcond = ($signed(alu_in_1) >= $signed(alu_in_2));
                    default : alu_bcond = 0;
                endcase
            end
            // `FUNC_ID : alu_result = alu_in_1;		
            // `FUNC_NOT : alu_result = alu_in_1;
            `FUNC_AND : alu_result = alu_in_1 & alu_in_2;
            `FUNC_OR : alu_result = alu_in_1 | alu_in_2;
            // `FUNC_NAND : alu_result = ~(alu_in_1 & alu_in_2);
            // `FUNC_NOR : alu_result = ~(alu_in_1 | alu_in_2);
            `FUNC_XOR : alu_result = alu_in_1 ^ alu_in_2;
            // `FUNC_XNOR : alu_result = ~(alu_in_1 ^ alu_in_2);
            // `FUNC_LLS : alu_result = alu_in_1 << 1'b1;
            `FUNC_LRS : alu_result = alu_in_1 >> 1'b1;
            // `FUNC_ALS : alu_result = alu_in_1 <<< 1'b1;
            `FUNC_ARS : alu_result = alu_in_1 >>> 1'b1;
            // `FUNC_TCP : alu_result = alu_in_1 + 1'b1;
            `FUNC_ZERO : alu_result = 0;
            default : alu_result = 0;
        endcase
        alu_bcond = 0;
    end
endmodule
