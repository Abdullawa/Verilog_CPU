`timescale 1ps/1ps

`define LD 5'h01
`define ST 5'h02
`define ADD 5'h03
`define SUB 5'h04
`define AND 5'h05
`define OR 5'h06
`define XOR 5'h07
`define NOT 5'h08
`define SL 5'h09
`define SR 5'h0A
`define BZ 5'h10
`define BNZ 5'h11
`define BRA 5'h12

`define IMMEDIATE_MODE 2'b00
`define DIRECT_MODE    2'b01

module Decoder(
    input [48:0] instructionline,
    output [4:0] opcode,
    output [1:0] mode,
    output [4:0] rd,
    output [4:0] rsA,
    output [31:0] immediate,
    output reg rLoad,
    output reg aMux,
    output reg bMux,
    output reg oMux,
    output reg memWrite,
    output reg branch
    );

    assign opcode    = instructionline[48:44];
    assign mode      = instructionline[43:42];
    assign rsA       = instructionline[41:37];
    assign rd        = instructionline[36:32];
    assign immediate = instructionline[31:0];

    always @(*) begin
        rLoad    = 0;
        aMux     = 0;
        bMux     = 0;
        oMux     = 0;
        memWrite = 0;
        branch   = 0;

        case (opcode)
            `LD: begin
                if (mode == `IMMEDIATE_MODE) begin
                    rLoad    = 1;
                    aMux     = 1;
                    bMux     = 0;
                    oMux     = 0;
                    memWrite = 0;
                end else if (mode == `DIRECT_MODE) begin
                    rLoad    = 1;
                    aMux     = 1;
                    bMux     = 0;
                    oMux     = 1;
                    memWrite = 0;
                end
            end

            `ST: begin
                rLoad    = 0;
                aMux     = 0;
                bMux     = 0;
                oMux     = 0;
                memWrite = 1;
            end

            `ADD: begin
                rLoad    = 1;
                aMux     = 0;
                bMux     = (mode == `IMMEDIATE_MODE) ? 1 : 0;
                oMux     = 0;
                memWrite = 0;
            end

            `SUB: begin
                rLoad    = 1;
                aMux     = 0;
                bMux     = (mode == `IMMEDIATE_MODE) ? 1 : 0;
                oMux     = 0;
                memWrite = 0;
            end

            `AND: begin
                rLoad    = 1;
                aMux     = 0;
                bMux     = (mode == `IMMEDIATE_MODE) ? 1 : 0;
                oMux     = 0;
                memWrite = 0;
            end

            `OR: begin
                rLoad    = 1;
                aMux     = 0;
                bMux     = (mode == `IMMEDIATE_MODE) ? 1 : 0;
                oMux     = 0;
                memWrite = 0;
            end

            `XOR: begin
                rLoad    = 1;
                aMux     = 0;
                bMux     = (mode == `IMMEDIATE_MODE) ? 1 : 0;
                oMux     = 0;
                memWrite = 0;
            end

            `NOT: begin
                rLoad    = 1;
                aMux     = 0;
                bMux     = 0;
                oMux     = 0;
                memWrite = 0;
            end

            `SL: begin
                rLoad    = 1;
                aMux     = 0;
                bMux     = (mode == `IMMEDIATE_MODE) ? 1 : 0;
                oMux     = 0;
                memWrite = 0;
            end

            `SR: begin
                rLoad    = 1;
                aMux     = 0;
                bMux     = (mode == `IMMEDIATE_MODE) ? 1 : 0;
                oMux     = 0;
                memWrite = 0;
            end

            `BZ: begin
                rLoad    = 0;
                aMux     = 0;
                bMux     = 0;
                oMux     = 0;
                memWrite = 0;
                branch   = 1;
            end

            `BNZ: begin
                rLoad    = 0;
                aMux     = 0;
                bMux     = 0;
                oMux     = 0;
                memWrite = 0;
                branch   = 1;
            end

            `BRA: begin
                rLoad    = 0;
                aMux     = 0;
                bMux     = 0;
                oMux     = 0;
                memWrite = 0;
                branch   = 1;
            end

            default: begin
                rLoad    = 0;
                aMux     = 0;
                bMux     = 0;
                oMux     = 0;
                memWrite = 0;
                branch   = 0;
            end
        endcase
    end

endmodule