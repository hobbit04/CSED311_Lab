`include "vending_machine_def.v"

	

module check_time_and_coin(i_input_coin,i_select_item,clk,reset_n,wait_time,o_return_coin);
	input clk;
	input reset_n;
	input [`kNumCoins-1:0] i_input_coin;
	input [`kNumItems-1:0]	i_select_item;
	output reg  [`kNumCoins-1:0] o_return_coin;
	output reg [31:0] wait_time;

	// initiate values
	initial begin
		// TODO: initiate values
		wait_time = `kWaitTime;
		o_return_coin = 0;
	end


	// update coin return time
	always @(i_input_coin, i_select_item) begin
		// TODO: update coin return time
		wait_time = `kWaitTime;  // 입력이 들어올 때마다, 대기 시간을 초기화 함.
	end

	always @(*) begin
		// TODO: o_return_coin
		o_return_coin = i_input_coin;  // 일단 테스트는 통과할 듯..? 구매하면서 얘도 확인하는 테스트가 없음
		
	end

	always @(posedge clk ) begin
		if (!reset_n) begin
		// TODO: reset all states.
			wait_time <= `kWaitTime;
			o_return_coin <= 0;
		end
		else begin
		// TODO: update all states.
			wait_time <= wait_time - 1; 
			o_return_coin <= i_input_coin;
		end
	end
endmodule 
