module BranchPredictor_Gshare(
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
	
	// This predictor updates itself ONLY WHEN the update_pc's instruction is branch or JAL
	// (We ignore JALR as well)
	// ignorable pc values come in as ~32'b0
	// Recall that stalling in the cpu will:
	// 	    1. fix current_pc
	//      2. give ~32'b0 for update_pc (so that no updates happen)
	// So we don't need additional stalling here
	
	integer i;
	wire tag_match;

	wire [4:0] update_BTB_index;
	wire [4:0] update_PHT_index;
	
	wire [4:0] predict_BTB_index;
	wire [4:0] predict_PHT_index;

	assign update_BTB_index = update_pc[4:0];
	assign update_PHT_index = update_pc[4:0];
	// This needs update so that the ACCESSED PHT ENTRY will be the UPDATED PHT ENTRY
	
	assign predict_BTB_index = current_pc[4:0];
	assign predict_PHT_index = current_pc[4:0] ^ BHSR[4:0];

	wire [1:0] next_PHT;

	// BTB, PHT, BSHR definition, initialization and update
	reg [31:0] 		BTB[0:31]; // 32-bit entries; 32 entries.
	reg [26:0] 		tag[0:31]; // (32-5)-bit entries; 32 entries.
	reg 	 	  valid[0:31];
	reg [1:0] 		PHT[0:31]; // 2-bit counter; 32 entries.
	reg [6:0] 		BHSR;

	always @(posedge clk) begin
		if (reset) begin
    		for (i = 0; i < 32; i = i + 1) begin
    			BTB[i] <= 32'b0;
				tag[i] <= 27'b0;
				valid[i] <= 1'b0;
    			PHT[i] <= 2'b10;		// Default to guessing weakly taken
			end
			BHSR <= 7'b0;
    	end
    	else if (update_pc != ~32'b0) begin
			tag[update_BTB_index] <= update_pc[31:5];
			BTB[update_BTB_index] <= update_BTB;
			valid[update_BTB_index] <= 1'b1;
			PHT[update_PHT_index] <= next_PHT; 	// Calculated by a 2-bit counter module
			BHSR <= {BHSR[5:0], update_taken};
    	end
  	end

	SaturationCounter saturation_counter(
		.branch_taken(update_taken),				// input
		.current_state(PHT[update_PHT_index]),		// input
		.next_state(next_PHT)						// output
	);

	// Prediction based on PHT
	// if valid and the tags match, use BTB
	assign tag_match = (tag[predict_BTB_index] == current_pc[31:5]);

	assign predicted_next_pc = (valid[predict_BTB_index]) && (tag_match) && (PHT[predict_PHT_index][1])
								? BTB[predict_BTB_index]
								: current_pc + 4;
	assign predicted_branch_taken = (valid[predict_BTB_index]) && (tag_match) && (PHT[predict_PHT_index][1])
								? 1'b1
								: 1'b0;
endmodule
