module parse_instructions(
    input [31:0] instruction,
    output [6:0] opcode,
    output [4:0] rs1,
    output [4:0] rs2,
    output [4:0] rd,
    output [10:0] alu_ctrl_input
    );

    assign opcode = instruction[6:0];
    assign rs1 = instruction[19:15];
    assign rs2 = instruction[24:20];
    assign rd = instruction[11:7];
    assign alu_ctrl_input = {instruction[30], instruction[14:12], instruction[6:0]};
endmodule
