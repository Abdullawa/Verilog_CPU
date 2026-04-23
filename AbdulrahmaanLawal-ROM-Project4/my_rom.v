/*
Name: Abdulrahmaan Lawal
R-Number: R111914753
Assignment: Final Project ROM
*/

`timescale 1ns / 1ps

// ROM module: 64 locations × 49-bit instructions

module my_rom (
    input clk,
    input en,
    input [5:0] addr,            // 6-bit address for 64 locations
    output [48:0] data_out       // 49-bit instruction output
);
    
    ROM rom_inst (
        .clka(clk),
        .ena(en),
        .addra(addr),
        .douta(data_out)
    );
    
endmodule