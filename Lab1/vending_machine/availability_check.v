`include "vending_machine_def.v"



module availability_check(current_money, item_price, o_available_item);

	input [`kTotalBits-1:0] current_money;
	input [31:0] item_price [`kNumItems-1:0];

	output reg [`kNumItems-1:0] o_available_item;
	
	integer i;

	
	// Combinational logic to convert current money -> available items
	always @(*) begin
		o_available_item = 0;
		for (i = 0; i < `kNumItems; i++) begin
			if (item_price[i] <= current_money) begin
				o_available_item[i] = 1'b1;
			end
		end
	end
endmodule 
