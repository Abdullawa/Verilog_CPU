`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    06:12:56 02/16/2026 
// Design Name: 
// Module Name:    ThreeInputAND 
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
module ThreeInputAND(A,B,C,L);
	input A,B,C;
	output L;
	
	assign L = A&B&C ;


endmodule
