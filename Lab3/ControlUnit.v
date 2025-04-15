module ControlUnit(
    input reset,
    input clk,
    input [6:0] opcode,
    input alu_bcond,
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
    output RegWrite,
    output is_ecall
);
    // We will implement the "MicroSequencer: ver 1.0" in the lecture notes
    // Because each stage has just one cycle, not many redundant cells
    // Also, we will design Moore machine for simplicity

    reg [3:0] current_state;
    wire [3:0] next_state;

    assign is_ecall = (opcode == 7'b1110011);

    // combinationally get control values from state
    StateToControl state_to_control(
        .current_state(current_state),          // input
        .PCWriteNotCond(PCWriteNotCond),        // output
        .PCWrite(PCWrite),                      // output
        .IorD(IorD),                            // output
        .MemRead(MemRead),                      // output
        .MemWrite(MemWrite),                    // output
        .MemtoReg(MemtoReg),                    // output
        .IRWrite(IRWrite),                      // output
        .PCSource(PCSource),                    // output
        .ALUOp(ALUOp),                          // output
        .ALUSrcB(ALUSrcB),                      // output
        .ALUSrcA(ALUSrcA),                      // output
        .RegWrite(RegWrite)                     // output
    );

    // combinationally get next state, based on current state and opcode
    StateMachine state_machine(
        .opcode(opcode),                    // input
        .alu_bcond(alu_bcond),              // input
        .current_state(current_state),      // input
        .next_state(next_state)             // output
    );

    // sequentially update current state
    always @(posedge clk) begin
        if (reset) begin
            current_state <= 4'b0000;
        end
        else begin
            current_state <= next_state;
        end
    end

endmodule
