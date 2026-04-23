/*
Name: Abdulrahmaan Lawal
R-Number: R111914753
Assignment: Final Project CPU Testbench
*/

`timescale 1ns / 1ps

module CPU_tb;
    reg clk;
    reg rst;
    
    wire [4:0] opcode;
    wire [4:0] rd;
    wire [4:0] rs1;
    wire [4:0] rs2;
    wire [28:0] immediate;
    
    integer i;
    
    // Instantiate the CPU
    CPU dut (
        .clk(clk),
        .rst(rst),
        .opcode(opcode),
        .rd(rd),
        .rs1(rs1),
        .rs2(rs2),
        .immediate(immediate)
    );
    
    // Clock generation
    always #5 clk = ~clk;
    
    // Test sequence
    initial begin
        // Initialize
        clk = 0;
        rst = 1;
        
        // Reset for 2 cycles
        #10;
        rst = 0;
        
        // Run for 70 cycles (fetch all 64 ROM locations + buffer)
        for (i = 0; i < 70; i = i + 1) begin
            #10;
            $display("Cycle: %d, Opcode: %h, RD: %d, RS1: %d, RS2: %d, Imm: %d", 
                     i, opcode, rd, rs1, rs2, immediate);
        end
        
        #10;
        $finish;
    end
    
endmodule