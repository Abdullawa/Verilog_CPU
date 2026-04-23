`timescale 1ns / 1ps

// Name: Abdul Rahmaan Lawal
// R Number: R11914753
// Date: February 18, 2026
// Description: 4-to-1 8-bit Multiplexer test bench

module eightbitfourinputmux;

	// Inputs
	reg [1:0] sel;
	reg [7:0] A;
	reg [7:0] B;
	reg [7:0] C;
	reg [7:0] D;

	// Outputs
	wire [7:0] x;

	// Instantiate the Unit Under Test (UUT)
	eightnitfourbitmux uut (
		.sel(sel), 
		.A(A), 
		.B(B), 
		.C(C), 
		.D(D), 
		.x(x)
	);

	initial begin
		// Initialize Inputs
		A = 4'b00000001;  // A = 1
		B = 4'b00000010;  // B = 2
		C = 4'b00000100;  // C = 4
		D = 4'b00001000;  // D = 8
		sel = 2'd0;

		// Wait 20 ns for global reset to finish
		#20;
        
		// Add stimulus here
		sel = 2'd0;  // Should output A = 00000001
		#20;
		
		sel = 2'd1;  // Should output B = 00000010
		#20;
		
		sel = 2'd2;  // Should output C = 00000100
		#20;
		
		sel = 2'd3;  // Should output D = 00001000
		#20;
		
		// Test with different input values
		A = 4'b00001111;
		B = 4'b00001010;
		C = 4'b00000101;
		D = 4'b00000011;
		
		sel = 2'd0;  // Should output A = 00001111
		#20;
		sel = 2'd1;  // Should output B = 00001010
		#20;
		sel = 2'd2;  // Should output C = 00000101
		#20;
		sel = 2'd3;  // Should output D = 00000011
		#20;
		
		$finish;

	end
      
endmodule

