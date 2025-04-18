`include "alu_func.v"

module ALU(
    input [3:0] alu_control,
    input [31:0] alu_in_1,
    input [31:0] alu_in_2,
    output reg [31:0] alu_result
    output reg alu_bcond
    );

    always @(*) begin
        alu_result = 32'b0;
        alu_bcond  = 1'b0;
        case(ALUControl) 
            `ALU_ADD : alu_result = alu_in_1 + alu_in_2;
            `ALU_SUB : alu_result = alu_in_1 - alu_in_2;
            `ALU_SLL : alu_result = alu_in_1 << alu_in_2[4:0];
            `ALU_SLT : alu_result = ($signed(alu_in_1) < $signed(alu_in_2)) ? 32'b1 : 32'b0;
            `ALU_SLTU : alu_result = (alu_in_1 < alu_in_2) ? 32'b1 : 32'b0;            
            `ALU_XOR : alu_result = alu_in_1 ^ alu_in_2;
            `ALU_SRL : alu_result = alu_in_1 >> alu_in_2[4:0];
            `ALU_SRA : alu_result = alu_in_1 >>> alu_in_2[4:0];
            `ALU_AND : alu_result = alu_in_1 & alu_in_2;
            `ALU_OR : alu_result = alu_in_1 | alu_in_2;
            
            `ALU_BEQ : alu_bcond = (alu_in_1 == alu_in_2);
            `ALU_BNE : alu_bcond = (alu_in_1 != alu_in_2);
            `ALU_BLT : alu_bcond = ($signed(alu_in_1) < $signed(alu_in_2));
            `ALU_BGE : alu_bcond = ($signed(alu_in_1) >= $signed(alu_in_2));
            `ALU_BLTU : alu_bcond = (alu_in_1 < alu_in_2);
            `ALU_BGEU : alu_bcond = (alu_in_1 >= alu_in_2);
            default : ;
        endcase
        
    end
endmodule
