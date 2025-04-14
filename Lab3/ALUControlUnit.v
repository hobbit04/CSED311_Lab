`include "opcodes.v"
module ALUControlUnit(

    input [3:0] functs,             // (that bit from funct7), (funct3)
    input [6:0] opcode,             // opcode (duh)
    input [1:0] ALUOp,              // From control unit
    output reg [5:0] ALUControl     // To ALU. (imm?), (branch?), (funct7 bit), (funct3)
);
    // Functionality
    // ALUOp = 00 then addition.
    // ALUOp = 01 then branch.
    // ALUOp = 10 then do what funct tells us to.  
    always @(*) begin
        case (ALUOp)
            2'b00: ALUControl = 6'b000000;
            2'b01: ALUControl = {2'b01, functs};
            2'b10: begin
                if (opcode == `ARITHMETIC_IMM) begin
                    ALUControl = {2'b10, functs};
                end
                else begin
                    ALUControl = {2'b00, functs};
                end
            end
            default: ALUControl = 6'b000000;
        endcase
    end

endmodule
