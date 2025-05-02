module ForwardingUnit(
    input [4:0] EX_rs1,
    input [4:0] EX_rs2,
    input [4:0] MEM_rd,
    input MEM_reg_write,
    input [4:0] WB_rd,
    input WB_reg_write,
    output reg [1:0] forward_ecall,
    output reg [1:0] forward_rs1,
    output reg [1:0] forward_rs2
    );

    // Output:
    //  00 then use from register file
    //  01 then use from WB stage
    //  10 then use from MEM stage

    always @(*) begin
        forward_ecall = 2'b00;
        forward_rs1 = 2'b00;
        forward_rs2 = 2'b00;

        if (MEM_rd == 5'b10001 && MEM_reg_write) begin
            forward_ecall = 2'b10;
        end
        else if (WB_rd == 5'b10001 && WB_reg_write) begin
            forward_ecall = 2'b01;
        end
        else begin
            forward_ecall = 2'b00;
        end

        if (EX_rs1 != 5'b00000 && EX_rs1 == MEM_rd && MEM_reg_write) begin
            forward_rs1 = 2'b10;
        end
        else if (EX_rs1 != 5'b00000 && EX_rs1 == WB_rd && WB_reg_write) begin
            forward_rs1 = 2'b01;
        end
        else begin
            forward_rs1 = 2'b00;
        end
        
        if (EX_rs2 != 5'b00000 && EX_rs2 == MEM_rd && MEM_reg_write) begin
            forward_rs2 = 2'b10;
        end
        else if (EX_rs2 != 5'b00000 && EX_rs2 == WB_rd && WB_reg_write) begin
            forward_rs2 = 2'b01;
        end
        else begin
            forward_rs2 = 2'b00;
        end
    end
endmodule
