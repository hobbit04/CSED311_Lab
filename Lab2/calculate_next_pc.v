module calculate_next_pc(
    input [31:0] current_pc_plus_4,
    input [31:0] branch_jal_address,
    input [31:0] jalr_address,
    input is_jalr,
    input is_jal,
    input branch,
    input bcond,
    output reg [31:0] next_pc
    );
    
    always @(*) begin
        next_pc = current_pc_plus_4;
        if (is_jalr) begin
            next_pc = jalr_address;
        end

        else if (branch && bcond || is_jal) begin
            next_pc = branch_jal_address;
        end
    end

endmodule
