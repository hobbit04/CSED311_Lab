`include "alu_func.v"

module alu (input alu_op, 
            input alu_in_1,
            input alu_in_2,
            output alu_result,
            output alu_bcond);

    case(opcode) 
        `FUNC_ID : alu_result = alu_in_1;		
        `FUNC_NOT : alu_result = alu_in_1;
        `FUNC_AND : alu_result = alu_in_1 & alu_in_2;
        `FUNC_OR : alu_result = alu_in_1 | alu_in_2;
        `FUNC_NAND : alu_result = ~(alu_in_1 & alu_in_2);
        `FUNC_NOR : alu_result = ~(alu_in_1 | alu_in_2);
        `FUNC_XOR : alu_result = alu_in_1 ^ alu_in_2;
        `FUNC_XNOR : alu_result = ~(alu_in_1 ^ alu_in_2);
        `FUNC_LLS : alu_result = alu_in_1 << 1'b1;
        `FUNC_LRS : alu_result = alu_in_1 >> 1'b1;
        `FUNC_ALS : alu_result = alu_in_1 <<< 1'b1;
        `FUNC_ARS : alu_result = alu_in_1 >>> 1'b1;
        `FUNC_TCP : alu_result = alu_in_1 + 1'b1;
        `FUNC_ZERO : alu_result = 0;
    endcase
endmodule