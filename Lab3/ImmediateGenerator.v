`include "opcodes.v"

module immediate_generator(
    input [31:0] IR,
    output reg [31:0] imm_gen_out  // Should be 64 or 32 bits? Not sure yet..
    );

    wire [6:0] opcode = IR[6:0];


    always @(*) begin
        case(opcode)
            `JAL : imm_gen_out = {{12{IR[31]}}, IR[19:12], IR[20], IR[30:21], 1'b0};
            `JALR : imm_gen_out = {{20{IR[31]}}, IR[31:20]};
            `BRANCH : imm_gen_out = {{20{IR[31]}}, IR[7], IR[30:25], IR[11:8], 1'b0};
            `LOAD : imm_gen_out = {{20{IR[31]}}, IR[31:20]};
            `STORE : imm_gen_out = {{20{IR[31]}}, IR[31:25], IR[11:7]};
            `ARITHMETIC_IMM : imm_gen_out = {{20{IR[31]}}, IR[31:20]};
            default: imm_gen_out = 32'b0;
        endcase
    end

endmodule
