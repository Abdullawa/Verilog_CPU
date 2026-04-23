/*
Name: Abdulrahmaan Lawal
R-Number: R11914753
Assignment: Project 2
*/

`timescale 1ns/1ps

module register_file_tb ();
    reg load_enable;
    reg [4:0] DA;
    wire [31:0] BusA;
    wire [31:0] BusB;
    reg [31:0] BusD;
    reg [4:0] Aselcect;
    reg [4:0] Bselect;
    reg RL;
    integer i; 

register_file uut(
    .load_enable(load_enable),
    .DA(DA),
    .BusA(BusA),
    .BusB(BusB),
    .BusD(BusD),
    .Aselcect(Aselcect),
    .Bselect(Bselect),
    .RL(RL)
); 
    
    initial begin
        load_enable = 0; DA = 5'b00000; BusD = 32'h00000000; Aselcect = 5'b00000; Bselect = 5'b00000; RL = 0;
        #20;
        
        // Test writing to registers
        for (i = 0; i < 32; i = i + 1) begin
            DA = i; BusD = 32'h00000001 << i; RL = 1; load_enable = 1;
            #20;
            load_enable = 0; RL = 0; // Disable writing after each write
            #20;

        end
        
        // Test reading from registers
        load_enable = 0; RL = 0;  // Turn off writes
        for (i = 0; i < 32; i = i + 1) begin
            Aselcect = i; Bselect = (31 - i);
            #20;
        end
        
        $finish;
    end
endmodule