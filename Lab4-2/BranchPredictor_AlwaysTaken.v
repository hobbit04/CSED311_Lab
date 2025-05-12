module BranchPredictor_AlwaysTaken(
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
	
	// Note that the update part is synchronous, while the prediction part is asynchronous

	integer i;
	wire [4:0] update_index;
	wire [4:0] predict_index;
	
	assign update_index = update_pc[4:0];
	assign predict_index = current_pc[4:0];

	// BTB, tag table definition
	reg [31:0] 		BTB[0:31]; // 32-bit entries; 32 entries.
	reg [26:0] 		tag[0:31]; // (32-5)-bit entries; 32 entries.
	reg 	 	  valid[0:31];

	// Initialization and update of BTB
	always @(posedge clk) begin
		if (reset) begin
    		for (i = 0; i < 32; i = i + 1) begin
    			BTB[i] <= 32'b0;
				tag[i] <= 27'b0;
				valid[i] <= 1'b0;
			end
    	end
    	else begin
    		// 0. ignore pc if it is 32'b0
			// 1. find the update_index, which is the lowest 5 bits of update_pc
			// 2. store tag and BTB
			// 3. Set valid bit to 1
			if (update_pc != ~32'b0) begin
				tag[update_index] <= update_pc[31:5];
				BTB[update_index] <= update_BTB;
				valid[update_index] <= 1'b1;
			end
    	end
  	end

	// Always taken
	// if valid and the tags match, use BTB
	assign predicted_next_pc = (valid[predict_index]) && (tag[predict_index] == current_pc[31:5])
								? BTB[predict_index]
								: current_pc + 4;
	assign predicted_branch_taken = (valid[predict_index]) && (tag[predict_index] == current_pc[31:5])
								? 1'b1
								: 1'b0;

endmodule
