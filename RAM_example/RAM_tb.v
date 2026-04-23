`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:17:41 02/09/2026
// Design Name:   RAM
// Module Name:   /home/ise/Shared_drive_for_ECE_4375/RAM_example/RAM_tb.v
// Project Name:  RAM_example
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: RAM
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module RAM_tb;

	// Inputs
	reg [3:0] dataIn;
	reg WR;
	reg RD;
	reg [3:0] addr;

	// Outputs
	wire [3:0] dataOut;

	// Instantiate the Unit Under Test (UUT)
	RAM uut (
		.dataIn(dataIn), 
		.dataOut(dataOut), 
		.WR(WR), 
		.RD(RD), 
		.addr(addr)
	);

	integer index;

	initial begin
		// Initialize Inputs
		dataIn = 0;
		WR = 0;
		RD = 0;
		addr = 0;

		// Wait 20 ns for global reset to finish
		#20;
		
		//write all memory location
		for (index = 0; index<16; index = index+1)begin
		addr = index[3:0];
		dataIn = 4'h5+index[3:0];
		#5;
		WR = 1;
		#20;
		WR = 0;
		#20;
		end
		
		//write all memory location
		for (index = 0; index<16; index = index+1)begin
		addr = index[3:0];
		#5;
		RD = 1;
		#20;
		RD = 0;
		#20;
		end
	
		// Add stimulus here
		
	end
      
endmodule

