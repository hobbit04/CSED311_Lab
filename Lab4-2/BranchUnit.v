`include "opcodes.v"
`include "alu_func.v"

module BranchUnit(
    input [31:0] pc,
    input [31:0] imm,
    input [31:0] rs1,
    input [31:0] rs2,
    input [6:0] opcode,
    input [2:0] funct3,
    output reg [31:0] branch_addr,
    output reg is_flush
    );
    
    always @(*) begin
        case(opcode)
            `BRANCH: begin
                case(funct3)
                    `FUNCT3_BEQ: is_flush = (rs1 == rs2);
                    `FUNCT3_BNE: is_flush = (rs1 != rs2);
                    `FUNCT3_BLT: is_flush = ($signed(rs1) < $signed(rs2));
                    `FUNCT3_BGE: is_flush = ($signed(rs1) >= $signed(rs2));
                    `FUNCT3_BLTU: is_flush = (rs1 < rs2);
                    `FUNCT3_BGEU: is_flush = (rs1 >= rs2);
                    default: is_flush = 1'b0;
                endcase
                if (is_flush)
                    branch_addr = pc + imm;
            end
            `JAL: begin
                is_flush = 1'b1;
                branch_addr = pc + imm;
            end
            `JALR: begin
                is_flush = 1'b1;
                branch_addr = (rs1 + imm) & ~32'b1; 
            end
            default: begin
                is_flush = 1'b0;
                branch_addr = pc + 4; // Next instruction
            end
        endcase
    end

    // 현재 문제 상황. branch를 taken 했는데, IF 단계에 있던 jal이 nop로 바뀌지 않음.. 그러다 jal이 EX 단계에 들어가서 점프를 해버림 -> IF 단계를 확실히 막아줘야!
endmodule
