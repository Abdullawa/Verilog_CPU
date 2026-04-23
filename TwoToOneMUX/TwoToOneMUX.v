`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:15:28 02/06/2026 
// Design Name: 
// Module Name:    TwoToOneMUX 
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
module TwoToOneMUX(Sel,A,B,Y);
input Sel,A,B;
output Y;

assign Y = Sel? B:A;



endmodule
