`include "alu_func.v"

module alu (input [3:0] alu_op,  
            input [31:0] alu_in_1,
            input [31:0] alu_in_2,
            output reg [31:0] alu_result,
            output reg alu_bcond);

    always @(*) begin
        alu_result = 32'b0;
        alu_bcond  = 1'b0;
        case(alu_op) 
            `FUNC_ADD : alu_result = alu_in_1 + alu_in_2;
            `FUNC_SUB : alu_result = alu_in_1 - alu_in_2;
            `FUNC_BEQ : alu_bcond = (alu_in_1 == alu_in_2); 
            `FUNC_BNE : alu_bcond = (alu_in_1 != alu_in_2);
            `FUNC_BLT : alu_bcond = ($signed(alu_in_1) < $signed(alu_in_2));
            `FUNC_BGE : alu_bcond = ($signed(alu_in_1) >= $signed(alu_in_2));            
            // `FUNC_ID : alu_result = alu_in_1;		    
            // `FUNC_NOT : alu_result = alu_in_1;
            `FUNC_AND : alu_result = alu_in_1 & alu_in_2;
            `FUNC_OR : alu_result = alu_in_1 | alu_in_2;
            // `FUNC_NAND : alu_result = ~(alu_in_1 & alu_in_2);
            // `FUNC_NOR : alu_result = ~(alu_in_1 | alu_in_2);
            `FUNC_XOR : alu_result = alu_in_1 ^ alu_in_2;
            // `FUNC_XNOR : alu_result = ~(alu_in_1 ^ alu_in_2);
            `FUNC_LLS : alu_result = alu_in_1 << alu_in_2[4:0]; // Use shift amount from alu_in_2
            `FUNC_LRS : alu_result = alu_in_1 >> alu_in_2[4:0]; // Use shift amount from alu_in_2
            // `FUNC_ALS : alu_result = alu_in_1 <<< 1'b1;
            `FUNC_ARS : alu_result = alu_in_1 >>> 1'b1;
            // `FUNC_TCP : alu_result = alu_in_1 + 1'b1;
            `FUNC_ZERO : alu_result = 0;
            default : ;
        endcase
        
    end
endmodule
