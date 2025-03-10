`include "vending_machine_def.v"

	

module change_detector(i_input_coin, i_select_item, i_trigger_return, clk, reset_n, is_change);
	input clk;
	input reset_n;
	input i_trigger_return;
	input [`kNumCoins-1:0] i_input_coin;
	input [`kNumItems-1:0] i_select_item;
	output is_change;


	reg [31:0] wait_time;

	// Timer logic
	// 1. default at 0
	// 2. whenever i_trigger_return == 1, set to 0
	// 3. whenever i_input_coin or i_select_item is nonzero, set to 100
	// 4. Decrease by 1 whenever clock edge
	always @(posedge clk) begin
		if (!reset_n) begin
			wait_time <= 0;
		end
		else if (i_trigger_return == 1) begin
			wait_time <= 0;
		end
		else if (i_input_coin != 0 || i_select_item != 0) begin
			wait_time <= `kWaitTime;
		end
		else if (wait_time != 0) begin
			wait_time <= wait_time - 1;
		end
	end

	// Output logic: is_change is when timer = 0 or i_trigger_return = 1.
	assign is_change = (wait_time == 0) || i_trigger_return;

endmodule 
