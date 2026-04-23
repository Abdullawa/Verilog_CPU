 `timescale 1ns/1ps

module coinCounterOut (change, outDime, outNickel, outQuarter, rst, clk);
    parameter QUARTER_VALUE =10'D25;
    parameter NICKEL_VALUE =10'D5;
    parameter DIME_VALUE =10'D10;

    input [10:0] change;
    input rst;
    input clk;
    output reg outDime, outNickel, outQuarter;

    reg [10:0] remainingChange;
    reg [10:0] lastchange;

    

    always @(posedge clk or posedge rst) begin
        outDime <= 1'b0;
        outNickel <= 1'b0;
        outQuarter <= 1'b0;
        if (rst == 1'b1) begin
            outDime <= 1'b0;
            outNickel <= 1'b0;
            outQuarter <= 1'b0;
            remainingChange <= 10'D0;
            lastchange <= 10'D0;
        end else begin

            if (remainingChange == 11'd0 && change != lastchange && change > 11'd0) begin
                remainingChange <= change;
                lastchange <= change;
                outDime <= 1'b0;
                outNickel <= 1'b0;
                outQuarter <= 1'b0;
            end

            else if (remainingChange >= QUARTER_VALUE) begin
                outQuarter <= 1'b1;
                remainingChange <= remainingChange - QUARTER_VALUE;

            end else if (remainingChange >= DIME_VALUE) begin
                outDime <= 1'b1;
                remainingChange <= remainingChange - DIME_VALUE;
            end else if (remainingChange >= NICKEL_VALUE) begin
                outNickel <= 1'b1;
                remainingChange <= remainingChange - NICKEL_VALUE;
            end else begin
                outDime <= 0;
                outNickel <= 0;
                outQuarter <= 0;
                
            end
        end
    end
    
endmodule