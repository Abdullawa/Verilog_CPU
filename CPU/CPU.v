`timescale 1ns / 1ps 

module CPU(
    input clk, rst,
    output [4:0] opcode,          // Send to ALU
    output [4:0] rd,              // Destination register
    output [4:0] rs1,             // Source register 1
    output [4:0] rs2,             // Source register 2
    output [28:0] immediate       // The constant/address value
    );

    // Wire declarations
    wire [48:0] instructionline;  // From ROM
    wire [31:0] ina_value;
    wire [31:0] inb_value;
    wire [31:0] alu_result;
    wire z_flag, n_flag, c_flag, v_flag;
    wire [31:0] bus_a, bus_b;
    wire [31:0] write_data;
    wire load_enable, rl_signal;
    wire [5:0] pc;                // Program counter
    // RAM instantiation for data memory
    wire [7:0] ram_addr;         // 8-bit address
    wire [31:0] ram_data_in;     // Data to write
    wire [31:0] ram_data_out;    // Data read from RAM
    wire ram_we;                 // RAM write enable

    reg [5:0] pc_reg;

    // ROM instantiation
    my_rom u3(
        .clk(clk),
        .en(1'b1),
        .addr(pc),
        .data_out(instructionline)
    );

    // Instruction decoder
    assign opcode = instructionline[48:44];
    assign rd = instructionline[43:39];
    assign rs1 = instructionline[38:34];
    assign rs2 = instructionline[33:29];
    assign immediate = instructionline[28:0];

    assign ina_value = bus_a;  // Missing semicolon
    assign inb_value = bus_b;  // Need this too
    assign write_data = alu_result;  // Write ALU result back
    assign load_enable = 1'b1;  // Always enable writes for now
    assign rl_signal = 1'b1;    // Always read/load for now


    ALU u1( 
    .ina(ina_value),           // 32-bit number
    .inb(inb_value),           // 32-bit number
    .opcode(opcode),           // Operation code
    .clk(clk),
    .rst(rst),
    .out(alu_result),          // 32-bit result
    .Z(z_flag),
    .N(n_flag),
    .C(c_flag),
    .V(v_flag)
    );

    register_file u2(
    .load_enable(load_enable),   // Enable writing to registers
    .DA(rd),                     // Destination register address
    .BusA(bus_a),                // Read output for rs1
    .BusB(bus_b),                // Read output for rs2
    .BusD(write_data),           // Data to write back
    .Aselcect(rs1),              // Read address A (source register 1)
    .Bselect(rs2),               // Read address B (source register 2)
    .RL(rl_signal)               // Read/Load control
    );

     my_ram u4(
        .clk(clk),
        .en(1'b1),               // RAM always enabled
        .addra(ram_addr),        // Address for load/store
        .wea(ram_we),            // Write enable
        .data_in(ram_data_in),   // Data to write
        .data_out(ram_data_out)  // Data read
    );

    always @(posedge clk or posedge rst) begin
        if (rst)
            pc_reg <= 6'b0;  // Reset PC to 0
        else
            pc_reg <= pc_reg + 1;  // Increment PC each cycle
    end
    
    assign pc = pc_reg;

endmodule
