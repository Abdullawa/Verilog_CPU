`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:20:05 02/06/2026
// Design Name:   TwoToOneMUX
// Module Name:   /home/ise/Shared_drive_for_ECE_4375/TwoToOneMUX/TwoToOnezMUX_TB.V
// Project Name:  TwoToOneMUX
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: TwoToOneMUX
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module TwoToOnezMUX_TB.V;

	// Inputs
	reg Sel;
	reg A;
	reg B;

	// Outputs
	wire Y;

	// Instantiate the Unit Under Test (UUT)
	TwoToOneMUX uut (
		.Sel(Sel), 
		.A(A), 
		.B(B), 
		.Y(Y)
	);

	initial begin
		// Initialize Inputs
		Sel = 0;
		A = 0;
		B = 0;

		// Wait 20 ns for global reset to finish
		#20;
        
		// Add stimulus here
		
		
		Sel = 0;
		A = 0;
		B = 1;
		#20;
		
		Sel = 0;
		A = 1;
		B = 0;
		#20;
		
		Sel = 1;
		A = 0;
		B = 0;
		#20;
		
		

	end
      
endmodule

