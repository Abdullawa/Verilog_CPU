`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:36:24 02/04/2026
// Design Name:   TwoToFourDec
// Module Name:   /home/ise/Shared_drive_for_ECE_4375/TwoToFourDecoder/TwoToFourDEC_tb.v
// Project Name:  TwoToFourDecoder
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: TwoToFourDec
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module TwoToFourDEC_tb;

	// Inputs
	reg [1:0] A;
	reg [1:0] index;

	// Outputs
	wire W;
	wire X;
	wire Y;
	wire Z;

	// Instantiate the Unit Under Test (UUT)
	TwoToFourDec uut (
		.A(A), 
		.W(W), 
		.X(X), 
		.Y(Y), 
		.Z(Z)
	);

	initial begin
		// Initialize Inputs
		A = 0;

		// Wait 100 ns for global reset to finish
		#20;
        
		// Add stimulus here
		for(index=0;index<8;index=index+1)begin
			A = index[1:0];
			#20;
			end

	end
      
endmodule

