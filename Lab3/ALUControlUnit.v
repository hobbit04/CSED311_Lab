module ALUControlUnit(
    input [3:0] functs,             // (that bit from funct7) concat (funct3)
    input [1:0] ALUOp,              // From control unit
    output reg [4:0] ALUControl     // To ALU. (branch?) concat (funct7 bit) concat (funct3)
);
    // Functionality
    // ALUOp = 00 then addition.
    // ALUOp = 01 then branch.
    // ALUOp = 10 then do what funct tells us to.  
    always @(*) begin
        case (ALUOp)
            2'b00: ALUControl = 5'b00000;
            2'b01: ALUControl = {1'b1, functs};
            2'b10: ALUControl = {1'b0, functs};
            default: ALUControl = 5'b00000;
        endcase
    end

endmodule
