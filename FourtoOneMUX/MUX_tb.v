`timescale 1ns / 1ps

module MUX_tb;

	// Inputs
	reg [1:0] sel;
	reg [3:0] A;
	reg [3:0] B;
	reg [3:0] C;
	reg [3:0] D;

	// Outputs
	wire [3:0] Y;

	// Instantiate the Unit Under Test (UUT)
	MUX uut (
		.sel(sel), 
		.A(A), 
		.B(B), 
		.C(C), 
		.D(D), 
		.Y(Y)
	);

	initial begin
		// Initialize Inputs with distinct values
		A = 4'b0001;  // A = 1
		B = 4'b0010;  // B = 2
		C = 4'b0100;  // C = 4
		D = 4'b1000;  // D = 8
		sel = 2'd0;
		
		// Display header
		$display("Time\tSel\tA\tB\tC\tD\tY");
		$monitor("%0t\t%d\t%b\t%b\t%b\t%b\t%b", 
		         $time, sel, A, B, C, D, Y);

		// Wait for initial setup
		#20;
        
		// Test all select combinations
		sel = 2'd0;  // Should output A = 0001
		#20;
		
		sel = 2'd1;  // Should output B = 0010
		#20;
		
		sel = 2'd2;  // Should output C = 0100
		#20;
		
		sel = 2'd3;  // Should output D = 1000
		#20;
		
		// Test with different input values
		A = 4'b1111;
		B = 4'b1010;
		C = 4'b0101;
		D = 4'b0011;
		
		sel = 2'd0;  // Should output A = 1111
		#20;
		sel = 2'd1;  // Should output B = 1010
		#20;
		sel = 2'd2;  // Should output C = 0101
		#20;
		sel = 2'd3;  // Should output D = 0011
		#20;
		
		$finish;
	end
      
endmodule