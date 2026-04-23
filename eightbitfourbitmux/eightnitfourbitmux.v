`timescale 1ns / 1ps
// Name: Abdul Rahmaan Lawal
// R Number: R11914753
// Date: February 18, 2026
// Description: 4-to-1 8-bit Multiplexer
module eightnitfourbitmux(sel,A,B,C,D,x);
input [1:0]sel;
input [7:0]A,B,C,D;
output reg[7:0]x;

always@(sel,A,B,C,D)begin
	case(sel)
	2'd0:			//sel = 00 x = A
		x<=A;
	2'd1:			//sel = 01 x = B
		x<=B;
	2'd2:			//sel = 10 x = C
		x<=C;
	2'd3:			//sel = 11 x = D
		x<=D;
	endcase
end
endmodule
