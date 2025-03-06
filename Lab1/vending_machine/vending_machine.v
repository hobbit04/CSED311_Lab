// Title         : vending_machine.v
// Author      : Jae-Eon Jo (Jojaeeon@postech.ac.kr) 
//			     Dongup Kwon (nankdu7@postech.ac.kr) (2015.03.30)
//			     Jaehun Ryu (jaehunryu@postech.ac.kr) (2021.03.07)

`include "vending_machine_def.v"

module vending_machine (
	clk,							// Clock signal
	reset_n,						// Reset signal (active-low)

	i_input_coin,				// coin is inserted.
	i_select_item,				// item is selected.
	i_trigger_return,			// change-return is triggered 

	o_available_item,			// Sign of the item availability
	o_output_item,			// Sign of the item withdrawal
	o_return_coin				// Sign of the coin return
);

	// Ports Declaration
	// Do not modify the module interface
	input clk;
	input reset_n;
	
	input [`kNumCoins-1:0] i_input_coin;
	input [`kNumItems-1:0] i_select_item;
	input i_trigger_return;
		
	output [`kNumItems-1:0] o_available_item;
	output [`kNumItems-1:0] o_output_item;
	output [`kNumCoins-1:0] o_return_coin;

	// Do not modify the values.
	wire [31:0] item_price [`kNumItems-1:0];	// Price of each item
	wire [31:0] coin_value [`kNumCoins-1:0];	// Value of each coin
	assign item_price[0] = 400;
	assign item_price[1] = 500;
	assign item_price[2] = 1000;
	assign item_price[3] = 2000;
	assign coin_value[0] = 100;
	assign coin_value[1] = 500;
	assign coin_value[2] = 1000;

	// Internal states. You may add your own net variables.
	wire [`kTotalBits-1:0] current_money;
	wire [`kNumItems-1:0] current_item;
	wire [`kNumCoins-1:0] current_change;
	
	// Next internal states. You may add your own net variables.
	wire [`kTotalBits-1:0] next_money;
	wire [`kNumItems-1:0] next_item;
	wire [`kNumCoins-1:0] next_change;
	
	wire is_change;

	assign o_output_item = current_item;
	assign o_return_coin = current_change;
	
	change_detector change_detector_module(
		.i_input_coin(i_input_coin),
		.i_select_item(i_select_item),
		.i_trigger_return(i_trigger_return),
		.clk(clk),
		.reset_n(reset_n),
		.is_change(is_change)
	);

	state_registers state_registers_module(
		.clk(clk),
		.reset_n(reset_n),
		.next_money(next_money),
		.next_item(next_item),
		.next_change(next_change),
		.current_money(current_money),
		.current_item(current_item),
		.current_change(current_change)
	);

	update_registers update_registers_module(
		.i_input_coin(i_input_coin),
		.i_select_item(i_select_item),
		.is_change(is_change),
		.item_price(item_price),
		.coin_value(coin_value),
		.current_money(current_money),
		.current_item(current_item),
		.current_change(current_change),
		.next_money(next_money),
		.next_item(next_item),
		.next_change(next_change)
	);

	availability_check availability_check_module(
		.current_money(current_money),
		.item_price(item_price),
		.o_available_item(o_available_item)
	);
endmodule
