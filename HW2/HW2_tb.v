`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   06:26:37 02/16/2026
// Design Name:   combined
// Module Name:   /home/ise/Shared_drive_for_ECE_4375/HW2/HW2_tb.v
// Project Name:  HW2
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: combined
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module HW2_tb;

	// Inputs
	reg A;
	reg B;
	reg C;

	// Outputs
	wire Q;

	// Instantiate the Unit Under Test (UUT)
	combined uut (
		.A(A), 
		.B(B), 
		.C(C), 
		.Q(Q)
	);

	initial begin
		// Initialize Inputs
		A = 0;
		B = 0;
		C = 0;

		// Wait 100 ns for global reset to finish
		#10;
		A = 0; 
		B = 0; 
		C = 0;
		#10;
		A = 0; 
		B = 0; 
		C = 1;
		#10;
		A = 0; 
		B = 1; 
		C = 0;
		#10;
		A = 0; 
		B = 1; 
		C = 1;
		#10;
		A = 1; 
		B = 0; 
		C = 0;
		#10;
		A = 1; 
		B = 0; 
		C = 1;
		#10;
		A = 1; 
		B = 1; 
		C = 0;
		#10;
		A = 1; 
		B = 1; 
		C = 1;
		#10;
		A = 0; 
		B = 0; 
		C = 0;
		
        
		// Add stimulus here

	end
      
endmodule

