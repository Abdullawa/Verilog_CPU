`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:06:33 02/09/2026 
// Design Name: 
// Module Name:    RAM 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module RAM(dataIn,dataOut,WR,rst,clk,addr);
input [3:0] dataIn;
input WR,rst,clk;
input[3:0] addr;

output [3:0] dataOut;

reg [3:0] dataSTORE[15:0];

assign dataOut = dataSTORE[addr];
integer index;

always @(posedge clk) begin
	if(rst==1)begin
	for(index = 0;index<8; index= index+1)begin
		dataSTORE[index]<=0;
		end
	end else begin
	if(WR == 1)begin
		dataSTORE[addr]<= dataIn;
		end
	end
end




endmodule
