/*
Name: Abdulrahmaan Lawal
R-Number: R111914753
Assignment: Project 3
*/

`timescale 1ps/1ps

module Project_3_Abdulrahmaan_lawal_tb ();
    reg [31:0] ina;
    reg [31:0] inb;
    reg [4:0] opcode;
    reg clk;
    reg rst;
    wire [31:0] out;
    wire Z;
    wire N;
    wire C;
    wire V;


    Project_3_Abdulrahmaan_lawal uut(
        .ina(ina),
        .inb(inb),
        .opcode(opcode),
        .clk(clk),
        .rst(rst),
        .out(out),
        .Z(Z),
        .N(N),
        .C(C),
        .V(V)
    );

    initial begin
        clk = 0; rst = 1; #20;
        rst = 0;
        
        // Test 0x01: LD
        ina = 32'h12345678; inb = 32'h00000000; opcode = 5'h01; #20;
        
        // Test 0x01: LD with zero
        ina = 32'h00000000; inb = 32'h00000000; opcode = 5'h01; #20;
        
        // Test 0x03: ADD
        ina = 32'hFFFFFFFF; inb = 32'h00000001; opcode = 5'h03; #20;
        
        // Test 0x03: ADD with overflow
        ina = 32'hFFFFFFFF; inb = 32'hFFFFFFFF; opcode = 5'h03; #20;
        
        // Test 0x03: ADD resulting in zero
        ina = 32'h80000000; inb = 32'h80000000; opcode = 5'h03; #20;
        
        // Test 0x04: SUBTRACT
        ina = 32'h00000000; inb = 32'h00000001; opcode = 5'h04; #20;
        
        // Test 0x04: SUB with underflow
        ina = 32'h00000005; inb = 32'h0000000A; opcode = 5'h04; #20;
        
        // Test 0x05: AND
        ina = 32'hF0F0F0F0; inb = 32'h0F0F0F0F; opcode = 5'h05; #20;
        
        // Test 0x05: AND with all zeros
        ina = 32'hF0F0F0F0; inb = 32'h0F0F0F0F; opcode = 5'h05; #20;
        
        // Test 0x06: OR
        ina = 32'hF0F0F0F0; inb = 32'h0F0F0F0F; opcode = 5'h06; #20;
        
        // Test 0x07: XOR
        ina = 32'hFFFF0000; inb = 32'h00FFFF00; opcode = 5'h07; #20;
        
        // Test 0x07: XOR resulting in zero
        ina = 32'hDEADBEEF; inb = 32'hDEADBEEF; opcode = 5'h07; #20;
        
        // Test 0x08: NOT
        ina = 32'hFFFF0000; inb = 32'h00000000; opcode = 5'h08; #20;
        
        // Test 0x09: SHIFT LEFT
        ina = 32'h00000001; inb = 5'd4; opcode = 5'h09; #20;

        // Test 0x09: SHIFT LEFT - trigger C flag
        ina = 32'h80000000; inb = 5'd1; opcode = 5'h09; #20;
        
        // Test 0x09: SL edge case (shift by 0)
        ina = 32'h12345678; inb = 5'd0; opcode = 5'h09; #20;
        
        // Test 0x0A: SHIFT RIGHT
        ina = 32'h00000010; inb = 5'd2; opcode = 5'h0A; #20;
        
        // Test 0x0A: SR edge case (shift by 31)
        ina = 32'h80000000; inb = 5'd31; opcode = 5'h0A; #20;

        $finish;
    end

    always #10 clk = ~clk; // Clock generation
endmodule