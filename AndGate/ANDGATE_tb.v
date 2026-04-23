`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:25:17 02/02/2026
// Design Name:   ANDGATE
// Module Name:   /home/ise/Shared_drive_for_ECE_4375/AndGate/ANDGATE_tb.v
// Project Name:  AndGate
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ANDGATE
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module ANDGATE_tb;

	// Inputs
	reg A;
	reg B;

	// Outputs
	wire Y;

	// Instantiate the Unit Under Test (UUT)
	ANDGATE uut (
		.A(A), 
		.B(B), 
		.Y(Y)
	);

	initial begin
		// Initialize Inputs
		A = 0;
		B = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		A = 1;
		B = 0;
		#20;
		
		A = 0;
		B = 1;
		#20;
		
		A = 1;
		B = 1;
		
		$finsh 

	end
      
endmodule

