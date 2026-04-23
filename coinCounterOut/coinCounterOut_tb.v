`timescale 1ns/1ps

module coinCounterOut_tb ();
reg [10:0] change;
reg rst;
reg clk;
wire outDime, outNickel, outQuarter;
coinCounterOut uut (
    .change(change), 
    .outDime(outDime), 
    .outNickel(outNickel), 
    .outQuarter(outQuarter), 
    .rst(rst),
    .clk(clk)
);

initial begin
    clk = 0;
    forever #10 clk = ~clk; // 20ns clock period
end

initial begin
    change = 10'D0; rst = 0;
    $dumpfile("coinCounterOut_output.vcd");
    $dumpvars(0, coinCounterOut_tb);
    rst = 1; 
    #20;

    rst = 0; change = 10'd300;
    #400;
    change = 10'd15;
    #400;
   change = 10'd5;
    #400;
    change = 10'd0;
    #400;

    $finish;
end
    
endmodule