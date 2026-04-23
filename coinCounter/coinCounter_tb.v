`timescale 1ns/1ps

module coinCounter_tb;

reg indime, inquarter, innickel, rst;
wire [9:0] moneycounter;
coinCounter uut (.indime(indime), .inquarter(inquarter), .innickel(innickel), .moneycounter(moneycounter), .rst(rst));

initial begin
    $dumpfile("coinCounter_output.vcd");
    $dumpvars(0, coinCounter_tb);
    indime = 0; 
    inquarter = 0; 
    innickel = 0; 
    rst = 0;


    rst = 1; indime = 0; 
    #20; 
    rst = 0; indime = 1;
    #20 ;
    indime = 0;
    #20 ;
    innickel = 1;
    #20 ;
    innickel = 0;
    #20 ;
    inquarter = 1;
    #20 ;
    inquarter = 0;
    $finish;
end
endmodule