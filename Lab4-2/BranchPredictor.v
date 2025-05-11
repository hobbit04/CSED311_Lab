module BranchPredictor(
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
	wire tag_match;

	wire [4:0] update_index;
	wire [4:0] predict_index;
	
	assign update_index = update_pc[4:0];
	assign predict_index = current_pc[4:0];

	wire [1:0] next_PHT;

	// BTB & PHT definition
	reg [1:0] 		PHT[0:31]; // 2-bit counter; 32 entries.
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
    	else if (update_pc != 32'b0) begin
    		// 0. ignore pc if it is 32'b0 (Only branch and JAL is not 32'b0)
			// 1. find the update_index, which is the lowest 5 bits of update_pc
			// 2. store tag and BTB
			// 3. Set valid bit to 1
			tag[update_index] <= update_pc[31:5];
			BTB[update_index] <= update_BTB;
			valid[update_index] <= 1'b1;
    	end
  	end

	// Initialization and update of PHT (Saturation counter)
	always @(posedge clk) begin
		if (reset) begin
    		for (i = 0; i < 32; i = i + 1) begin
    			PHT[i] <= 2'b0;
			end
    	end
    	else if (update_pc != 32'b0) begin
			PHT[update_index] <= next_PHT;
    	end
  	end

	SaturationCounter saturation_counter(
		.branch_taken(update_taken),		// input
		.current_state(PHT[update_index]),	// input
		.next_state(next_PHT)				// output
	);


	// Prediction based on PHT
	// if valid and the tags match, use BTB
	assign tag_match = (tag[predict_index] == current_pc[31:5]);

	assign predicted_next_pc = (valid[predict_index]) && (tag_match) && (PHT[predict_index][1])
								? BTB[predict_index]
								: current_pc + 4;
	assign predicted_branch_taken = (valid[predict_index]) && (tag_match) && (PHT[predict_index][1])
								? 1'b1
								: 1'b0;
endmodule
