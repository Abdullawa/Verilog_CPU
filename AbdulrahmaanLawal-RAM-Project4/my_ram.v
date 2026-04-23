/*
Name: Abdulrahmaan Lawal
RNumber: R111914753
Assignment: Project 4 RAM
*/

`timescale 1ns / 1ps

// this is my RAM module that instantiates the RAM IP core

module my_ram (
    input clk,
    input en,
    input [7:0] addra,
	 input wea,
	 input [31:0] data_in,
    output [31:0] data_out
);
    RAM ram_inst (
        .clka(clk),
        .ena(en),
		  .wea(wea),
        .addra(addra),
		  .dina(data_in),
        .douta(data_out)
    );
endmodule
