`timescale 1ns/1ps
module bevDispenser_tb ();
reg inbev1, inbev2, inbev3, inbev4, rst;
reg [10:0] inmoney;
wire outbev1, outbev2, outbev3, outbev4;
wire [10:0] change;
bevDispenser uut (.inbev1(inbev1), .inbev2(inbev2), .inbev3(inbev3), .inbev4(inbev4), .outbev1(outbev1), .outbev2(outbev2), .outbev3(outbev3), .outbev4(outbev4), .rst(rst), .inmoney(inmoney), .change(change));

initial begin
    inbev1 = 0; inbev2 = 0; inbev3 = 0; inbev4 = 0; rst = 0; inmoney = 10'd0;
    $dumpfile("bevDispenser_output.vcd");
    $dumpvars(0, bevDispenser_tb);
    rst = 1; 
    #20;
    rst = 0; inbev1 = 1; inbev2 = 0; inbev3 = 0; inbev4 = 0; inmoney = 10'd200;
    #20;
    inbev1 = 0; inmoney = 10'd0;
    #20;
    inbev3 = 1; inmoney = 10'd200;
    #20;
    inbev3 = 0; inmoney = 10'd0;
    #20;
    inbev2 = 1; inmoney = 10'd200;
    #20;
    inbev2 = 0; inmoney = 10'd0;
    #20;
    inbev4 = 1; inmoney = 10'd200           ;
    #20;
    inbev4 = 0; inmoney = 10'd0;
    #20;


    $finish;
end
    
endmodule