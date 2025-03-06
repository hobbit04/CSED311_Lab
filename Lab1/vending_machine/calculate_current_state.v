
`include "vending_machine_def.v"
	

module calculate_current_state(i_input_coin,i_select_item,item_price,coin_value,current_total,
input_total, output_total, return_total,current_total_nxt,wait_time,o_return_coin,o_available_item,o_output_item);


	// input_coin = current coin input by user; return_coin = coins when returning
	input [`kNumCoins-1:0] i_input_coin,o_return_coin;
	
	// select_item = current item selection by user
	input [`kNumItems-1:0]	i_select_item;			

	// item_price (0~3) : use like constants
	// coin_value (0~2) : use like constants
	input [31:0] item_price [`kNumItems-1:0];
	input [31:0] coin_value [`kNumCoins-1:0];

	// current_total = total money NOT considering current inputs
	input [`kTotalBits-1:0] current_total;

	// time left
	input [31:0] wait_time;
	
	
	output reg [`kNumItems-1:0] o_available_item,o_output_item;

	// current_total_nxt will be the next 
	output reg [`kTotalBits-1:0] current_total_nxt;
	integer i;	



	
	// Combinational logic for the next states
	always @(*) begin

		// TODO: current_total_nxt
		for i_input_coin * coin_value
		// Logic:
		//		1. Based on i_input_coin and coin_value, calculate the input money
		//		2. Add input money to current_total to output current_total_nxt
		//		3. If left time is 0, return changes
	end

	
	
	// Combinational logic for the outputs
	always @(*) begin
		// TODO: o_available_item


		// Logic:
		//		1. The inputs will be reflected in cur_total_nxt at current tick, and cur_total in next tick
		//		2. According to test bench, we will check for o_available_item in next tick.
		//			--> Therefore, it is sufficient to use cur_total for o_available_item.
		//		3. Compare current_total with each item_price, and then output every buyable item

		// TODO: o_output_item

		o_output_item = i_select_item;
		// Logic:
		//		1. ASSUME that there's enough money (testbench doesn't check for much)
		//		2. Calculate total money required from i_select_item
		//		3. Let i_select_item to o_output_item after one tick ()
		//		4. Decrease current 

	end
 
	


endmodule 
