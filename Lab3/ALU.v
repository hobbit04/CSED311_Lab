`include "alu_func.v"

module ALU (input [3:0] ALUControl,  
            input [31:0] alu_in_1,
            input [31:0] alu_in_2,
            output reg [31:0] alu_result,
            output reg alu_bcond);

    always @(*) begin
        alu_result = 32'b0;
        alu_bcond  = 1'b0;
        case(ALUControl) 
            `FUNC_ADD : alu_result = alu_in_1 + alu_in_2;
            `FUNC_SUB : alu_result = alu_in_1 - alu_in_2;
            `FUNC_BEQ : alu_bcond = (alu_in_1 == alu_in_2); 
            `FUNC_BNE : alu_bcond = (alu_in_1 != alu_in_2);
            `FUNC_BLT : alu_bcond = ($signed(alu_in_1) < $signed(alu_in_2));
            `FUNC_BGE : alu_bcond = ($signed(alu_in_1) >= $signed(alu_in_2));
            
            `FUNC_AND : alu_result = alu_in_1 & alu_in_2;
            `FUNC_OR : alu_result = alu_in_1 | alu_in_2;
            
            `FUNC_XOR : alu_result = alu_in_1 ^ alu_in_2;

            `FUNC_LLS : alu_result = alu_in_1 << alu_in_2[4:0]; 
            `FUNC_LRS : alu_result = alu_in_1 >> alu_in_2[4:0]; 

            `FUNC_ARS : alu_result = alu_in_1 >>> alu_in_2[4:0];

            `FUNC_ZERO : alu_result = 0;
            default : ;
        endcase
        
    end
endmodule
