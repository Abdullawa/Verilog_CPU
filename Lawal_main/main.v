`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    01:36:02 02/27/2026 
// Design Name: 
// Module Name:    main 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module main(
	input indime, input innickel, input inquarter, input rst, input clk, input inbev1, input inbev2, input inbev3, input inbev4, input cancel,
	output outbev1, output outbev2, output outbev3, output outbev4, output outNickel, output outQuarter, output outDime
	);
	wire [10:0] w1, w2;
	wire w3;
	coinCounter u1(.indime(indime), .innickel(innickel), .inquarter(inquarter), .rst(rst), .moneycounter(w1), .clk(clk), .clearMoney(w3));
	bevDispenser u2(.inbev1(inbev1),.inbev2(inbev2), .inbev3(inbev3), .inbev4(inbev4), .rst(rst), .clk(clk), .inmoney(w1), .change(w2),.clearMoney(w3), .outbev1(outbev1), .outbev2(outbev2), .outbev3(outbev3), .outbev4(outbev4), .cancel(cancel));
	coinCounterOut u3(.change(w2), .rst(rst), .clk(clk), .outNickel(outNickel), .outDime(outDime), .outQuarter(outQuarter));


endmodule
