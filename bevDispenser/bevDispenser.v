`timescale 1ns/1ps
module bevDispenser (inbev1, inbev2, inbev3, inbev4, outbev1, outbev2, outbev3, outbev4, rst, clk, inmoney, change, cancel, clearMoney);
    parameter BEV1_VALUE = 10'd175;
    parameter BEV2_VALUE = 10'd200;
    parameter BEV3_VALUE = 10'd225;
    parameter BEV4_VALUE = 10'd250;

    input inbev1, inbev2, inbev3, inbev4, cancel, rst, clk;
    input [10:0] inmoney;
    output reg outbev1, outbev2, outbev3, outbev4, clearMoney;
    output reg [10:0] change;

    wire beventered;
    assign beventered = inbev1 | inbev2 | inbev3 | inbev4;

    
    

    always @(posedge clk or posedge rst) begin
        if (rst == 1'b1) begin
            outbev1 <= 0;
            outbev2 <= 0;
            outbev3 <= 0;
            outbev4 <= 0;
            change <= 10'd0;
        end else if (cancel == 1'b1) begin
            outbev1 <= 0;
            outbev2 <= 0;
            outbev3 <= 0;
            outbev4 <= 0;
            change <= inmoney;
        end else begin
			outbev1 <= 0;
            outbev2 <= 0;
            outbev3 <= 0;
            outbev4 <= 0;
            clearMoney <= 0;

        if (inbev1) begin
                if (inmoney >= BEV1_VALUE) begin
                    outbev1 <= 1;
                    change <= inmoney - BEV1_VALUE;
                    clearMoney <= 1;
                end else begin
                    change <= inmoney;
                    clearMoney <= 1;
                end
            end else if (inbev2) begin
                if (inmoney >= BEV2_VALUE) begin
                    outbev2 <= 1;
                    change <= inmoney - BEV2_VALUE;
                    clearMoney <= 1;
                end else begin
                    change <= inmoney;
                    clearMoney <= 1;
                end
            end else if (inbev3) begin
                if (inmoney >= BEV3_VALUE) begin
                    outbev3 <= 1;
                    change <= inmoney - BEV3_VALUE;
                    clearMoney <= 1;
                end else begin
                    change <= inmoney;
                    clearMoney <= 1;
                end
            end else if (inbev4) begin
                if (inmoney >= BEV4_VALUE) begin
                    outbev4 <= 1;
                    change <= inmoney - BEV4_VALUE;
                    clearMoney <= 1;
                end else begin
                    change <= inmoney;
                    clearMoney <= 1;
                end 

            end
    end
end
endmodule