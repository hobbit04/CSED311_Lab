module PC(
	input reset,
    input clk,
	input PCWrite,
	input PCWriteCond,
	input alu_bcond,
    input [31:0] next_pc,
    output reg [31:0] current_pc
	);

	always @(posedge clk) begin
		if (reset) begin
			current_pc <= 0;
		end
		else if (PCWrite || (PCWriteCond && alu_bcond)) begin
    		current_pc <= next_pc;
		end
	end
endmodule 
