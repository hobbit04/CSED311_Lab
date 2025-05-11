module BranchPredictor(
    input reset,
	input clk,
	input [31:0] pc_for_update,
	input [31:0] update_next_pc,
	input update_taken,
	input [31:0] current_pc,
	output [31:0] predicted_next_pc,
    output predicted_branch_taken
	);

	// Note that the update part is synchronous, while the prediction part is asynchronous

	// Always not taken
	assign predicted_next_pc = current_pc + 4;
	assign predicted_branch_taken = 1'b0;

	reg [31:0] last_update_pc;
    reg        last_update_taken;
    reg [31:0] last_update_next_pc;
	
	always @(posedge clk) begin
        if (reset) begin
            last_update_pc        <= 32'b0;
            last_update_taken     <= 1'b0;
            last_update_next_pc   <= 32'b0;
        end else begin
            last_update_pc        <= pc_for_update;
            last_update_taken     <= update_taken;
            last_update_next_pc   <= update_next_pc;
        end
    end



	/*
	always @(posedge clk) begin
		if (reset) begin
			current_pc <= 0;
		end
		else if (!is_stall) begin
			current_pc <= next_pc;
		end
	end
	*/
endmodule 
