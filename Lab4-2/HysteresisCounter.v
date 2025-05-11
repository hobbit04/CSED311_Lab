module HysteresisCounter(
	input branch_taken,
	input [1:0] current_state,
	output reg [1:0] next_state
	);

    always @(*) begin
        case(current_state)
            2'b00: begin
				if(branch_taken) next_state = 2'b01;
				else next_state = 2'b00;
			end
			2'b01: begin
				if(branch_taken) next_state = 2'b11;
				else next_state = 2'b00;
			end
			2'b10: begin
				if(branch_taken) next_state = 2'b11;
				else next_state = 2'b00;
			end
			2'b11: begin
				if(branch_taken) next_state = 2'b11;
				else next_state = 2'b10;
			end
		endcase
	end
endmodule
