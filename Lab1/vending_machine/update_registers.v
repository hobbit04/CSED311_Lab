
`include "vending_machine_def.v"

module update_registers(i_input_coin, i_select_item, is_change, item_price, coin_value, current_money, current_item, current_change, 
next_money, next_item, next_change);

	input [`kNumCoins-1:0] i_input_coin;
	input [`kNumItems-1:0] i_select_item;			
	input is_change;

	input [31:0] item_price [`kNumItems-1:0];
	input [31:0] coin_value [`kNumCoins-1:0];

	input [`kTotalBits-1:0] current_money;
	input [`kNumItems-1:0] current_item;
	input [`kNumCoins-1:0] current_change;

	output reg [`kTotalBits-1:0] next_money;
	output reg [`kNumItems-1:0] next_item;
	output reg [`kNumCoins-1:0] next_change;


	integer i;

	// Big assumption: the three inputs (input_coin, select_item, trigger_return) never occur simultaneously
	
	// Combinational logic for next_money & next_change
	always @(*) begin
		next_money = current_money;
		next_change = current_change;

		// Adding logic for next_money
		if (i_input_coin != 0) begin
			for (i = 0; i < `kNumCoins; i++) begin
				next_money += coin_value[i] * i_input_coin[i];
			end
		end
	
		// Subtracting logic for next_money
		else if (i_select_item != 0) begin
			for (i = 0; i < `kNumItems; i++) begin
				next_money -= item_price[i] * i_select_item[i];
			end
		end

		// if change is requested, next_money should be 0 and change should exist
		// Assumption: money can always be represented with one of 100, 500, 1000 each
		else if (is_change == 1) begin
			for (i = 0; i < `kNumCoins; i++) begin
				if (next_money >= coin_value[`kNumCoins-1 - i]) begin
					next_money -= coin_value[`kNumCoins-1 - i];
					next_change[`kNumCoins-1 - i] = 1'b1;
				end
			end
		end
	end

	// Combinational logic for next item
	// Assumption: always possible to dispense
	always @(*) begin
		// Used bitwise OR so that it doesn't get overwritten
		next_item = i_select_item | current_item;
	end
endmodule 
