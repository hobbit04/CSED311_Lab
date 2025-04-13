module ALUControlUnit(
    input [1:0] ALUOp,  // From control unit
    input [5:0] funct,  // From instruction register
    output reg [3:0] ALUControl  // To ALU
);
    
    always @(*) begin
        ALUControl = 4'b0000;
        
        if (ALUOp[0] || (ALUOp[1] && funct[1])) begin
            ALUControl[2] = 1'b1;
        end
        if (ALUOp[1] || funct[2]) begin
            ALUControl[1] = 1'b1;
        end
        if (ALUOp[1] && (funct[0] || funct[3])) begin
            ALUControl[0] = 1'b1;
        end    
    end

endmodule
