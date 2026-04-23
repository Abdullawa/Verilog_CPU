`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    06:15:42 02/16/2026 
// Design Name: 
// Module Name:    combined 
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
module combined(A,B,C,Q);
	input A,B,C;
	output Q;
	wire W1,W2;
	
	twoInputNAND u1(.A(A), .B(B), .Z(W1));
	twoInputNOR u2(.A(A), .B(B), .G(W2));
	ThreeInputAND u3(.A(W1), .B(W2), .C(C), .L(Q));
    


endmodule
