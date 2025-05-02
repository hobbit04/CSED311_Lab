`include "opcodes.v"

module ImmediateGenerator(
    input [31:0] instruction,
    output reg [31:0] imm_gen_out
    );

    wire [6:0] opcode = instruction[6:0];


    always @(*) begin
        case(opcode)
            `JAL : imm_gen_out = {{12{instruction[31]}}, instruction[19:12], instruction[20], instruction[30:21], 1'b0};
            `JALR : imm_gen_out = {{20{instruction[31]}}, instruction[31:20]};
            `BRANCH : imm_gen_out = {{20{instruction[31]}}, instruction[7], instruction[30:25], instruction[11:8], 1'b0};
            `LOAD : imm_gen_out = {{20{instruction[31]}}, instruction[31:20]};
            `STORE : imm_gen_out = {{20{instruction[31]}}, instruction[31:25], instruction[11:7]};
            `ARITHMETIC_IMM : imm_gen_out = {{20{instruction[31]}}, instruction[31:20]};
            default: imm_gen_out = 32'b0;
        endcase
    end

endmodule
