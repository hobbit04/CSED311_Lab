`include "opcodes.v"
module StateMachine(
    input [6:0] opcode,
    input [3:0] current_state,
    output reg [3:0] next_state
);
    
    always @(*) begin
        case(AddrCtrl)
            2'b00: next_state = 0;
            2'b01: begin
                case(opcode)
                    `ARITHMETIC: next_state = 6;
                    `BRANCH: next_state = 8;
                    `LOAD, `STORE: next_state = 2;
                endcase
            end
            2'b10: begin
                case(opcode)
                    `LOAD: next_state = 3;
                    `STORE: next_state = 5;
                endcase
            end
            2'b11: begin
                next_state = state + 1;
            end
        endcase
    end
endmodule
