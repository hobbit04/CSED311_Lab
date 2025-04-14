`include "opcodes.v"

module ALU (input [4:0] ALUControl,  
            input [31:0] alu_in_1,
            input [31:0] alu_in_2,
            output reg [31:0] alu_result,
            output reg alu_bcond);

    always @(*) begin
        alu_result = 32'b0;
        alu_bcond  = 1'b0;

        // branches
        if (ALUControl[4] == 1'b1) begin
            case (ALUControl[2:0])
                `FUNCT3_BEQ: alu_bcond = (alu_in_1 == alu_in_2);
                `FUNCT3_BNE: alu_bcond = (alu_in_1 != alu_in_2);
                `FUNCT3_BLT: alu_bcond = ($signed(alu_in_1) < $signed(alu_in_2));
                `FUNCT3_BGE: alu_bcond = ($signed(alu_in_1) >= $signed(alu_in_2));
                default: ;
            endcase
        end

        // arithmetic results
        else begin
            case (ALUControl[2:0])
                `FUNCT3_ADD: begin
                    if (ALUControl[3] == 0) begin
                        alu_result = alu_in_1 + alu_in_2;
                    end
                    else begin
                        alu_result = alu_in_1 - alu_in_2;
                    end
                end
                `FUNCT3_SLL: alu_result = alu_in_1 << alu_in_2;
                `FUNCT3_XOR: alu_result = alu_in_1 ^ alu_in_2;
                `FUNCT3_OR: alu_result = alu_in_1 | alu_in_2;
                `FUNCT3_AND: alu_result = alu_in_1 & alu_in_2;
                `FUNCT3_SRL: alu_result = alu_in_1 >> alu_in_2;
                default: ;
            endcase
        end
    end
endmodule
