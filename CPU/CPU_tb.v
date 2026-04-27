`timescale 1ns / 1ps

module CPU_tb;

    reg clk;
    reg rst;
    reg [48:0] ROM_data_input;
    reg [31:0] RAM_data_output;

    wire [5:0] ROM_address;
    wire [31:0] RAM_address;
    wire [31:0] RAM_data_input;
    wire RAM_write_enable;

    reg [48:0] rom [0:63];
    integer i;

    CPU uut (
        .clk(clk),
        .rst(rst),
        .ROM_data_input(ROM_data_input),
        .RAM_data_output(RAM_data_output),
        .ROM_address(ROM_address),
        .RAM_address(RAM_address),
        .RAM_data_input(RAM_data_input),
        .RAM_write_enable(RAM_write_enable)
    );

    initial begin
        clk = 1'b0;
        forever #5 clk = ~clk;
    end

    initial begin
        rst = 1'b1;

        for (i = 0; i < 64; i = i + 1)
            rom[i] = 49'h0;

        // Instruction format:
        // [48:44] opcode, [43:42] mode, [41:37] rsA, [36:32] rd, [31:0] immediate
        rom[0] = {5'h01, 2'b00, 5'd0, 5'd1, 32'd5};   // LD  R1, #5
        rom[1] = {5'h01, 2'b00, 5'd0, 5'd2, 32'd3};   // LD  R2, #3
        rom[2] = {5'h03, 2'b00, 5'd1, 5'd3, 32'd2};   // ADD R3, R1, #2
        rom[3] = {5'h04, 2'b00, 5'd3, 5'd4, 32'd1};   // SUB R4, R3, #1
        rom[4] = {5'h05, 2'b00, 5'd4, 5'd5, 32'd6};   // AND R5, R4, #6
        rom[5] = {5'h06, 2'b00, 5'd5, 5'd6, 32'd1};   // OR  R6, R5, #1
        rom[6] = {5'h07, 2'b00, 5'd6, 5'd7, 32'd7};   // XOR R7, R6, #7
        rom[7] = {5'h09, 2'b00, 5'd7, 5'd8, 32'd1};   // SL  R8, R7, #1
        rom[8] = {5'h0A, 2'b00, 5'd8, 5'd9, 32'd1};   // SR  R9, R8, #1
        rom[9] = {5'h12, 2'b00, 5'd0, 5'd0, 32'd2};   // BRA +2
        rom[10] = {5'h01, 2'b00, 5'd0, 5'd10, 32'd99}; // skipped after branch
        rom[11] = {5'h01, 2'b00, 5'd0, 5'd11, 32'd55}; // skipped after branch
        rom[12] = {5'h01, 2'b00, 5'd0, 5'd12, 32'd42}; // branch target

        #12;
        rst = 1'b0;

        #160;
        $finish;
    end

    always @(*) begin
        ROM_data_input = rom[ROM_address];
    end

    always @(*) begin
        case (RAM_address)
            32'd0: RAM_data_output = 32'h00000011;
            32'd1: RAM_data_output = 32'h00000022;
            default: RAM_data_output = 32'h00000000;
        endcase
    end

    initial begin
        $display("time\tclk\trst\tpc\trom_word\t\tir\t\trd\tload\talu_result\twrite_data\twrite_en");
        $monitor("%0t\t%b\t%b\t%0d\t%h\t%h\t%0d\t%b\t%h\t%h\t%b",
                 $time, clk, rst, ROM_address, ROM_data_input, uut.ir,
                 uut.rd, uut.load_enable, uut.alu_result, uut.write_data,
                 RAM_write_enable);
    end

    always @(negedge clk) begin
        if (!rst) begin
            $display("DBG : ir=%h rd=%0d rs1=%0d imm=%0d load=%b bus_a=%0d bus_b=%0d alu=%0d write=%0d",
                     uut.ir, uut.rd, uut.rs1, uut.immediate, uut.load_enable,
                     uut.bus_a, uut.bus_b, uut.alu_result, uut.write_data);
            $display("REGS: R1=%0d R2=%0d R3=%0d R4=%0d R5=%0d R6=%0d R7=%0d R8=%0d R9=%0d R10=%0d R12=%0d",
                     uut.u2.registers[1], uut.u2.registers[2], uut.u2.registers[3],
                     uut.u2.registers[4], uut.u2.registers[5], uut.u2.registers[6],
                     uut.u2.registers[7], uut.u2.registers[8], uut.u2.registers[9],
                     uut.u2.registers[10], uut.u2.registers[12]);
        end
    end

endmodule
