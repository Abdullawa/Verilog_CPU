`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   02:38:13 02/27/2026
// Design Name:   main
// Module Name:   /home/ise/Shared_drive_for_ECE_4375/main/main_tb.v
// Project Name:  main
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: main
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module main_tb;

	// Inputs
	reg indime;
	reg innickel;
	reg inquarter;
	reg rst;
	reg clk;
	reg inbev1;
	reg inbev2;
	reg inbev3;
	reg inbev4;
	reg cancel;

	// Outputs
	wire outbev1;
	wire outbev2;
	wire outbev3;
	wire outbev4;
	wire outNickel;
	wire outQuarter;
	wire outDime;

	// Instantiate the Unit Under Test (UUT)
	main uut (
		.indime(indime), 
		.innickel(innickel), 
		.inquarter(inquarter), 
		.rst(rst), 
		.clk(clk), 
		.inbev1(inbev1), 
		.inbev2(inbev2), 
		.inbev3(inbev3), 
		.inbev4(inbev4), 
		.cancel(cancel), 
		.outbev1(outbev1), 
		.outbev2(outbev2), 
		.outbev3(outbev3), 
		.outbev4(outbev4), 
		.outNickel(outNickel), 
		.outQuarter(outQuarter), 
		.outDime(outDime)
	);

	initial begin
		clk = 0;
		forever #10 clk = ~clk;
	end
	initial begin
		// Initialize Inputs
		indime = 0;
		innickel = 0;
		inquarter = 0;
		rst = 0;
		inbev1 = 0;
		inbev2 = 0;
		inbev3 = 0;
		inbev4 = 0;
		cancel = 0;

		// Wait 20 ns for global reset to finish
		rst =1;
		#20;
		rst =0;
		indime  = 1;
		#20;
		indime = 0;
		#20;
		inquarter = 1;
		#20;
		inquarter = 0;
		#20;
		inquarter = 1;
		#20;
		inquarter = 0;
		#20;
		inquarter = 1;
		#20;
		inquarter = 0;
		#20;
		inquarter = 1;
		#20;
		inquarter = 0;
		#20;
		inquarter = 1;
		#20;
		inquarter = 0;
		#20;
		inquarter = 1;
		#20;
		inquarter = 0;
		#20;
		inquarter = 1;
		#20;
		inquarter = 0;
		#20;
		inquarter = 1;
		#20;
		inquarter = 0;
		#20;
		inquarter = 1;
		#20;
		inquarter = 0;
		#20;
		inbev2 = 1;
		#100;
		inbev2 = 0;
		#100;
		indime  = 1;
		#20;
		indime = 0;
		#20;
		inquarter = 1;
		#20;
		inquarter = 0;
		#20;
		inquarter = 1;
		#20;
		inquarter = 0;
		#20;
		inquarter = 1;
		#20;
		inquarter = 0;
		#20;
		inquarter = 1;
		#20;
		inquarter = 0;
		#20;
		inquarter = 1;
		#20;
		inquarter = 0;
		#20;
		inquarter = 1;
		#20;
		inquarter = 0;
		#20;
		inquarter = 1;
		#20;
		inquarter = 0;
		#20;
		inquarter = 1;
		#20;
		inquarter = 0;
		#20;
		inquarter = 1;
		#20;
		inquarter = 0;
		#20;
		inbev1 = 1;
		#100;
		inbev1 = 0;
		#100;
		indime  = 1;
		#20;
		indime = 0;
		#20;
		inquarter = 1;
		#20;
		inquarter = 0;
		#20;
		inquarter = 1;
		#20;
		inquarter = 0;
		#20;
		inquarter = 1;
		#20;
		inquarter = 0;
		#20;
		inquarter = 1;
		#20;
		inquarter = 0;
		#20;
		inquarter = 1;
		#20;
		inquarter = 0;
		#20;
		inquarter = 1;
		#20;
		inquarter = 0;
		#20;
		inquarter = 1;
		#20;
		inquarter = 0;
		#20;
		inquarter = 1;
		#20;
		inquarter = 0;
		#20;
		inquarter = 1;
		#20;
		inquarter = 0;
		#20;
		inbev3 = 1;
		#100;
		inbev3 = 0;
		#100;
		indime  = 1;
		#20;
		indime = 0;
		#20;
		inquarter = 1;
		#20;
		inquarter = 0;
		#20;
		inquarter = 1;
		#20;
		inquarter = 0;
		#20;
		inquarter = 1;
		#20;
		inquarter = 0;
		#20;
		inquarter = 1;
		#20;
		inquarter = 0;
		#20;
		inquarter = 1;
		#20;
		inquarter = 0;
		#20;
		inquarter = 1;
		#20;
		inquarter = 0;
		#20;
		inquarter = 1;
		#20;
		inquarter = 0;
		#20;
		inquarter = 1;
		#20;
		inquarter = 0;
		#20;
		inquarter = 1;
		#20;
		inquarter = 0;
		#20;
		inbev4 = 1;
		#100;
		inbev4 = 0;
		#100;
		inquarter = 1;
		#20;
		inquarter = 0;
		#20;
		inquarter = 1;
		#20;
		inquarter = 0;
		#20;
		inquarter = 1;
		#20;
		inquarter = 0;
		#20;
		inquarter = 1;
		#20;
		inquarter = 0;
		#20;
		inquarter = 1;
		#20;
		inquarter = 0;
		#20;
		inquarter = 1;
		#20;
		inquarter = 0;
		#20;
		inquarter = 1;
		#20;
		inquarter = 0;
		#20;
		cancel = 1;
		#20;
		cancel = 0;
		#20;
		
		
        
		// Add stimulus here

	end
      
endmodule

