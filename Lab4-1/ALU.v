`include "alu_func.v"

module ALU(
    input [3:0] alu_control,
    input [31:0] alu_in_1,
    input [31:0] alu_in_2,
    input [1:0] forward_rs1,
    input [1:0] forward_rs2,
    input [31:0] EX_MEM_alu_out,
    input [31:0] MEM_WB_alu_out,
    output reg [31:0] alu_result
    );

    wire [31:0] forwarded_alu_in_1;
    wire [31:0] forwarded_alu_in_2;

    assign forwarded_alu_in_1 = (forward_rs1 == 2'b01) ? EX_MEM_alu_out : 
                (forward_rs1 == 2'b10) ? MEM_WB_alu_out : alu_in_1;
    assign forwarded_alu_in_2 = (forward_rs2 == 2'b01) ? EX_MEM_alu_out :
                (forward_rs2 == 2'b10) ? MEM_WB_alu_out : alu_in_2;
    always @(*) begin
        alu_result = 32'b0;
        case(alu_control) 
            `ALU_ADD : alu_result = forwarded_alu_in_1 + forwarded_alu_in_2;
            `ALU_SUB : alu_result = forwarded_alu_in_1 - forwarded_alu_in_2;
            `ALU_SLL : alu_result = forwarded_alu_in_1 << forwarded_alu_in_2[4:0];
            `ALU_SLT : alu_result = ($signed(forwarded_alu_in_1) < $signed(forwarded_alu_in_2)) ? 32'b1 : 32'b0;
            `ALU_SLTU : alu_result = (forwarded_alu_in_1 < forwarded_alu_in_2) ? 32'b1 : 32'b0;            
            `ALU_XOR : alu_result = forwarded_alu_in_1 ^ forwarded_alu_in_2;
            `ALU_SRL : alu_result = forwarded_alu_in_1 >> forwarded_alu_in_2[4:0];
            `ALU_SRA : alu_result = forwarded_alu_in_1 >>> forwarded_alu_in_2[4:0];
            `ALU_AND : alu_result = forwarded_alu_in_1 & forwarded_alu_in_2;
            `ALU_OR : alu_result = forwarded_alu_in_1 | forwarded_alu_in_2;
            default : ;
        endcase
        
    end
endmodule
