`timescale 1ns/1ps
module coinCounter (indime, inquarter, innickel, moneycounter, rst, clk, clearMoney);
    parameter QUARTER_VALUE =10'D25;
    parameter NICKEL_VALUE =10'D5;
    parameter DIME_VALUE =10'D10;

    input indime, inquarter, innickel, rst, clk;
    input clearMoney;
    output reg [10:0] moneycounter;

    always @(posedge clk or posedge rst) begin
        if (rst == 1'b1) begin
            moneycounter <= 10'D0;
        end else if (clearMoney == 1'b1) begin
            moneycounter <= 10'D0;
        end else begin
        moneycounter <= moneycounter + (indime * DIME_VALUE) + (inquarter * QUARTER_VALUE) + (innickel * NICKEL_VALUE);
        end
    end

endmodule