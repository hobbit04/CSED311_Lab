module PC(
	input reset,
    input clk,
	input is_stall,
	input is_flush,
    input [31:0] next_pc,
    output reg [31:0] current_pc
	);

	always @(posedge clk) begin
		if (reset) begin
			current_pc <= 0;
		end
		else if (!is_stall || is_flush) begin
			current_pc <= next_pc;
		end

	end
endmodule 
