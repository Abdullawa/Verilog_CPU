/*
Name: Abdulrahmaan Lawal
R-Number: R111914753
Assignment: Final Project RAM Testbench
*/
`timescale 1ns/1ps

module my_ram_tb;
    reg clk;
    reg en;
    reg [7:0] addra;             // 8-bit address for 256 locations
    reg wea;                     // Write enable
    reg [31:0] data_in;          // 32-bit data input
    wire [31:0] data_out;        // 32-bit data output
    integer i;
    
    // Instantiate the RAM
    my_ram dut (
        .clk(clk),
        .en(en),
        .addra(addra),
        .wea(wea),
        .data_in(data_in),
        .data_out(data_out)
    );
    
    // Clock generation
    always #5 clk = ~clk;
    
    // Test sequence
    initial begin
        // Initialize signals
        clk = 0;
        en = 0;
        wea = 0;
        addra = 0;
        data_in = 0;
        
        // Wait before enabling
        #10;
        en = 1;
        
        // Write to all 256 addresses
        wea = 1;  // Enable writes
        for (i = 0; i < 256; i = i + 1) begin
            addra = i;
            data_in = i * 4;  // Test pattern
            #10;
        end
        
        // Read back from all addresses
        wea = 0;  // Disable writes
        for (i = 0; i < 256; i = i + 1) begin
            addra = i;
            #10;
            $display("Address: %d, Data: %h", addra, data_out);
        end
        
        #10;
        $finish;
    end
    
endmodule