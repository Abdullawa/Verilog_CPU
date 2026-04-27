`timescale 1ns/1ps

/*
Name: Abdulrahmaan Lawal
R-Number: R111914753
Assignment: Project X (Final CPU)
*/

module register_file (load_enable, DA, BusA, BusB, BusD, Aselcect, Bselect, RL, clk, rst);
    // Write control signals
    input load_enable;           // Enable writing to registers
    input [4:0] DA;              // Destination address (which register to write)
    input [31:0] BusD;           // Data to write
    input RL;                    // Read/Load control signal
    input clk;                   // Clock signal
    input rst;                   // Reset signal
    
    // Read control signals
    input [4:0] Aselcect;        // Address for BusA read port
    input [4:0] Bselect;         // Address for BusB read port
    
    // Read outputs
    output reg [31:0] BusA;      // Data from register at Aselect
    output reg [31:0] BusB;      // Data from register at Bselect
    
    reg [31:0] registers [31:0]; // 32 registers of 32 bits each

    // Synchronous write: writes happen when load_enable and RL are both high
    always @(posedge clk) begin
        if (RL == 1 && load_enable == 1)
            registers[DA] <= BusD;
    end

    // Combinational read: reads are immediate, no clock delay
    always @(*) begin
        BusA = registers[Aselcect];
        BusB = registers[Bselect];
    end

    integer i;
    initial begin
        for (i = 0; i < 32; i = i + 1)
            registers[i] = 32'd0;
    end


endmodule