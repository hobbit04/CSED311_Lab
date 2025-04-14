`include "states.v"

module StateToControl(
    input [3:0] current_state,
    output reg PCWriteCond,
    output reg PCWrite,
    output reg IorD,
    output reg MemRead,
    output reg MemWrite,
    output reg MemtoReg,
    output reg IRWrite,
    output reg PCSource,
    output reg [1:0] ALUOp,
    output reg [1:0] ALUSrcB,
    output reg ALUSrcA,
    output reg RegWrite
    );

    // combinational logic to determine control based on state
    always @(*) begin
        PCWriteCond = 0;
        PCWrite = 0;
        IorD = 0;
        MemRead = 0;
        MemWrite = 0;
        MemtoReg = 0;
        IRWrite = 0;
        PCSource = 0;
        ALUOp = 2'b00;
        ALUSrcB = 2'b00;
        ALUSrcA = 0;
        RegWrite = 0;

        case(current_state)
            // IR <- MEM[PC]
            `IF: begin
                IorD = 0;
                MemRead = 1;
                IRWrite = 1;
            end

            // A <- RF[rs1(IR)]
            // B <- RF[rs2(IR)]
            // ALUOut <- PC+4
            `ID: begin
                ALUSrcA = 0;
                ALUSrcB = 2'b01;
                ALUOp = 2'b00;
            end
            
            // ALUOut <- A op B
            `EX_R: begin
                ALUSrcA = 1;
                ALUSrcB = 2'b00;
                ALUOp = 2'b10;
            end

            // ALUOut <- A op imm
            `EX_IALU: begin
                ALUSrcA = 1;
                ALUSrcB = 2'b10;
                ALUOp = 2'b10;
            end

            // RF[rd(IR)] <- ALUOut
            // PC <- PC + 4
            `WB_ALU: begin
                MemtoReg = 0;
                RegWrite = 1;

                ALUSrcA = 0;
                ALUSrcB = 2'b01;
                ALUOp = 2'b00;
                PCSource = 0;
                PCWrite = 1;
            end
            
            // ALUOut <- A + imm
            `EX_LDSD: begin
                ALUSrcA = 1;
                ALUSrcB = 2'b10;
                ALUOp = 2'b00;
            end

            // MDR <- MEM[ALUOut]
            `MEM_LD: begin
                IorD = 1;
                MemRead = 1;
            end

            // RF[rd(IR)] <- MDR
            // PC <- PC + 4
            `WB_LD: begin
                MemtoReg = 1;
                RegWrite = 1;

                ALUSrcA = 0;
                ALUSrcB = 2'b01;
                ALUOp = 2'b00;
                PCSource = 0;
                PCWrite = 1;                
            end

            // MEM[ALUOut] <- B
            // PC <- PC + 4
            `MEM_SD: begin
                IorD = 1;
                MemWrite = 1;

                ALUSrcA = 0;
                ALUSrcB = 2'b01;
                ALUOp = 2'b00;
                PCSource = 0;
                PCWrite = 1;
            end

            // RF[rd(IR)] <- ALUOut
            // PC <- PC + imm
            `EX_JAL: begin
                MemtoReg = 0;
                RegWrite = 1;

                ALUSrcA = 0;
                ALUSrcB = 2'b10;
                ALUOp = 2'b00;
                PCSource = 0;
                PCWrite = 1;
            end

            // RF[rd(IR)] <- ALUOut
            // PC <- A + imm
            `EX_JALR: begin
                MemtoReg = 0;
                RegWrite = 1;

                ALUSrcA = 1;
                ALUSrcB = 2'b10;
                ALUOp = 2'b00;
                PCSource = 0;
                PCWrite = 1;
            end

            // A <- RF[rs1(IR)]
            // B <- RF[rs2(IR)]
            // PC <- PC + 4
            `ID_PC: begin
                ALUSrcA = 0;
                ALUSrcB = 2'b01;
                ALUOp = 2'b00;
                PCSource = 0;
                PCWrite = 1;
            end

            // ALUOut <- PC + imm
            `EX_B1: begin
                ALUSrcA = 0;
                ALUSrcB = 2'b10;
                ALUOp = 2'b00;
            end

            // cond? (A, B). if(cond?) then PC <- ALUOut
            `EX_B2: begin
                ALUSrcA = 1;
                ALUSrcB = 2'b00;
                ALUOp = 2'b01;
                PCSource = 1;
                PCWriteCond = 1;
            end

            default: ;
        endcase
    end

endmodule
