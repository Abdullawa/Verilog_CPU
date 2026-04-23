/*
Name: Abdulrahmaan Lawal
R-Number: R111914753
Assignment: Final Project ROM Testbench
*/

`timescale 1ns/1ps

module my_rom_tb;
    reg clk;
    reg en;
    reg [5:0] addr;              // 6-bit address for 64 locations
    wire [48:0] data_out;        // 49-bit instruction output
    integer i;
    
    // Instantiate the ROM
    my_rom dut (
        .clk(clk),
        .en(en),
        .addr(addr),
        .data_out(data_out)
    );
    
    // Clock generation
    always #5 clk = ~clk;
    
    // Test sequence
    initial begin
        // Initialize
        clk = 0;
        en = 0;
        addr = 0;
        
        // Wait before enabling
        #10;
        en = 1;
        
        // Read all 64 addresses
        for (i = 0; i < 64; i = i + 1) begin
            addr = i;
            #10;
            $display("Address: %d, Data: %b", addr, data_out);
        end
        
        #10;
        $finish;
    end
    
endmodule