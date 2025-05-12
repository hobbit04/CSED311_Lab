module BranchPredictor_AlwaysNotTaken(
    input reset,
    input clk,
    // For updating the predictor
    input [31:0] update_pc,
    input [31:0] update_BTB,
    input update_taken,
    // For generating predictions
    input [31:0] current_pc,
    output [31:0] predicted_next_pc,
    output predicted_branch_taken
    );
	
	// Always not taken
	// if valid and the tags match, use BTB
	assign predicted_next_pc = current_pc + 4;
	assign predicted_branch_taken = 1'b0;
endmodule
