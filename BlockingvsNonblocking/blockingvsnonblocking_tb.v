`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:37:34 02/13/2026
// Design Name:   BlockingvsNonBLocking
// Module Name:   /home/ise/Shared_drive_for_ECE_4375/BlockingvsNonblocking/blockingvsnonblocking_tb.v
// Project Name:  BlockingvsNonblocking
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: BlockingvsNonBLocking
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module blockingvsnonblocking_tb;

	// Inputs
	reg [3:0] a;
	reg [3:0] b;
	reg [3:0] go;

	// Outputs
	wire [7:0] y;

	// Instantiate the Unit Under Test (UUT)
	BlockingvsNonBLocking uut (
		.a(a), 
		.b(b), 
		.y(y),
		.go(go)
	);

	initial begin
		// Initialize Inputs
		a = 1;
		b = 3;
		go = 0;

		// Wait 100 ns for global reset to finish
		#20;
        go=1;
		  #20;
		  go=0;
		  #20;
		  go=1;
		  #20;
		// Add stimulus here

	end
      
endmodule

