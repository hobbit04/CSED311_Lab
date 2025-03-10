`include "vending_machine_def.v"


module state_registers(clk, reset_n, next_money, next_item, next_change,
current_money, current_item, current_change);

	input clk;
	input reset_n;
	
	input [`kTotalBits-1:0] next_money;
	input [`kNumItems-1:0] next_item;
	input [`kNumCoins-1:0] next_change;

	output reg [`kTotalBits-1:0] current_money;
	output reg [`kNumItems-1:0] current_item;
	output reg [`kNumCoins-1:0] current_change;

	// Sequential circuit to reset or update the states
	always @(posedge clk) begin
		if (!reset_n) begin
			current_money <= 0;
			current_item <= 0;
			current_change <= 0;
		end
		else begin
			current_money <= next_money;
			current_item <= next_item;
			current_change <= next_change;
		end
	end
endmodule 
