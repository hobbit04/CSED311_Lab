module ForwardingDetection(
    input is_stall,
    input [4:0] ID_rs1,
    input [4:0] ID_rs2,
    input [6:0] ID_opcode,
    input [4:0] EX_rd,
    input EX_reg_write,
    input [4:0] MEM_rd,
    input MEM_reg_write,
    output reg [1:0] forward_rs1,
    output reg [1:0] forward_rs2
);
    wire rs1_and_rs2_conditions;
    wire rs1_conditions;

    wire use_rs1, use_rs2;

    assign rs1_and_rs2_conditions = (ID_opcode == `ARITHMETIC) || (ID_opcode == `STORE);
    assign rs1_conditions = (ID_opcode == `ARITHMETIC_IMM) || (ID_opcode == `LOAD) || (ID_opcode == `ECALL);

    assign use_rs1 = (rs1_and_rs2_conditions || rs1_conditions) && (ID_rs1 != 5'b0);
    assign use_rs2 = rs1_and_rs2_conditions && (ID_rs2 != 5'b0);

    always @(*) begin
        if(is_stall) begin
            forward_rs1 = 2'b00;
            forward_rs2 = 2'b00;
        end else begin
            // First determine for rs1
            if((ID_rs1 == EX_rd) && use_rs1 && EX_reg_write) begin
                forward_rs1 = 2'b01; // Forward from EX stage
            end else if ((ID_rs1 == MEM_rd) && use_rs1 && MEM_reg_write) begin
                forward_rs1 = 2'b10; // Forward from MEM stage
            end else begin
                forward_rs1 = 2'b00; // No forwarding
            end

            // Then determine for rs2
            if((ID_rs2 == EX_rd) && use_rs2 && EX_reg_write) begin
                forward_rs2 = 2'b01; // Forward from EX stage
            end else if ((ID_rs2 == MEM_rd) && use_rs2 && MEM_reg_write) begin
                forward_rs2 = 2'b10; // Forward from MEM stage
            end else begin
                forward_rs2 = 2'b00; // No forwarding
            end
        end
    end
endmodule
