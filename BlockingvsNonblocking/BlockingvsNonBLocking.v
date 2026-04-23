`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:30:38 02/13/2026 
// Design Name: 
// Module Name:    BlockingvsNonBLocking 
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
module BlockingvsNonBLocking(a,b,y);
input[3:0] a,b;
output reg[7:0] y;

always @(a,b)begin
	y=a;
	y=y+b;
end


endmodule
