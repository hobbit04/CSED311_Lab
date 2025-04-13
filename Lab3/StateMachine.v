`include "opcodes.v"
`include "states.v"

module StateMachine(
    input [6:0] opcode,
    input [3:0] current_state,
    output reg [3:0] next_state
);
    
    always @(*) begin
        case(current_state)
            `IF: next_state = `ID;
            `ID: case(opcode)
                `ARITHMETIC: next_state = `EX_R;
                `ARITHMETIC_IMM: next_state = `EX_IALU;
                `LOAD: next_state = `EX_LDSD;
                `STORE: next_state = `EX_LDSD;
                `BRANCH: next_state = `EX_B1;
                `JAL: next_state = `EX_JAL;
                `JALR: next_state = `EX_JALR;
                default: next_state = `IF;
            endcase

            `EX_R: next_state = `WB_ALU;
            `EX_IALU: next_state = `WB_ALU;
            `WB_ALU: next_state = `ID;

            `EX_LDSD: if(opcode == `LOAD) begin
                next_state = `MEM_LD;
            end
            else begin
                next_state = `MEM_SD;
            end
            `MEM_LD: next_state = `WB_LD;
            `WB_LD: next_state = `IF;
            `MEM_SD: next_state = `IF;
            `EX_B1: // if not branch condition go to IF, else go to EX_B2
            `EX_B2: next_state = `IF;
            `EX_JAL: next_state = `IF;
            `EX_JALR: next_state = `IF;
            default: next_state = `IF;
        endcase
    end
endmodule
