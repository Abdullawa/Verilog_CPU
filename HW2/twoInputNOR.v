`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    06:08:58 02/16/2026 
// Design Name: 
// Module Name:    twoInputNOR 
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
module twoInputNOR(A,B,G);
	input A,B;
	output G;
	
	assign G = !(A|B);


endmodule
