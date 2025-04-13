module StateToControl(
    input [3:0] current_state,
    output PCWriteNotCond,
    output PCWrite,
    output IorD,
    output MemRead,
    output MemWrite,
    output MemtoReg,
    output IRWrite,
    output PCSource,
    output [1:0] ALUOp,
    output [1:0] ALUSrcB,
    output ALUSrcA,
    output RegWrite
    );

    // combinational logic to determine 
    always (*) begin
        ALUSrcA = 0;
        IorD = 0;
        IRWrite = 0;
        PCSource = 0;
        PCWrite = 0;
        PCWriteCond = 0;
        MemRead = 0;
        MemWrite = 0;
        MemtoReg = 0;
        RegWrite = 0;
        ALUOp = 2'b00;
        ALUSrcB = 2'b00;

        case(state)
            // Instruction Fetch
            4'b0000: begin
                MemRead = 1;
                ALUSrcA = 0;
                IorD = 0;
                IRWrite = 1;
                ALUSrcB = 2'b01;
                ALUOp = 2'b00;
                PCWrite = 1;
                PCSource = 0;
            end

            // Instruction decode / register fetch
            4'b0001: begin
                ALUSrcA = 0;
                ALUSrcB = 2'b10;
                ALUOp = 2'b00;
            end
            
            // Memory address computation
            4'b0010: begin
                ALUSrcA = 1;
                ALUSrcB = 2'b10;
                ALUOp = 2'b00;
            end
            // Memory access
            4'b0011: begin
                MemRead = 1;
                IorD = 1;
            end
            // Write-back step
            4'b0100: begin
                RegD
            end
            4'b0101:


        endcase
    end

endmodule
