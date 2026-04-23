/*
Name: Abdulrahmaan Lawal
R-Number: R111914753
Assignment: Project 3
*/

`timescale 1ps/1ps

module ALU (
    input  [31:0] ina, inb,
    input  [4:0] opcode,
    input clk, rst,
    output reg [31:0] out,
    output reg Z, N, C, V
);

    always @(posedge clk) begin
        
        if(rst == 1)begin
            out = 0;
            Z = 0;
            N = 0;
            C = 0;
            V = 0;
        end
        else begin
            case (opcode)
                5'h01: begin //LD
                    out = ina;
                    Z = 0;
                    N = 0;
                    C = 0;
                    V = 0;
                end
                5'h03: begin //add
                    out = ina + inb;
                    Z = (out == 0);
                    N = out[31];
                    C = (ina > (32'hFFFFFFFF - inb));
                    V = ((ina[31] == inb[31]) && (out[31] != ina[31]));
                end
                5'h04: begin //subtract
                    out = ina - inb;
                    Z = (out == 0);
                    N = out[31];
                    C = (ina < inb);
                    V = ((ina[31] != inb[31]) && (out[31] != ina[31]));
                end
                5'h05: begin // and
                    out = ina & inb;
                    Z = (out == 0);
                    N = 0;
                    C = 0;
                    V = 0;
                end
                5'h06: begin // or
                    out = ina | inb;
                    Z = (out == 0);
                    N = 0;
                    C = 0;
                    V = 0;

                end
                5'h07: begin // xor
                    out = ina ^ inb;
                    Z = (out == 0);
                    N = 0;
                    C = 0;  
                    V = 0;
                end
                5'h08: begin // not
                    out = ~ina;
                    Z = (out == 0);
                    N = 0;
                    C = 0;
                    V = 0;

                end
                5'h09: begin // shift left
                    out = (ina << inb);
                    Z = (out == 0);
                    C = (ina[31] && (inb != 0));
                    N = 0;
                    V = 0;
                end
                5'h0A: begin // shift right
                    out = (ina >> inb);
                    Z = (out == 0);
                    C = 0;
                    N = 0;
                    V = 0;
                end
                default: begin
                end
            endcase
        end

    end

endmodule