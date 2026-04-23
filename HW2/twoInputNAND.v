`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    05:59:11 02/16/2026 
// Design Name: 
// Module Name:    twoInputNAND 
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
module twoInputNAND(A,B,Z);
	input A,B;
	output Z;
	
	assign Z = !(A&B);


endmodule
