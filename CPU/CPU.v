`timescale 1ns / 1ps 

module CPU(
    input clk,
    input rst,
    input [48:0] ROM_data_input,
    input [31:0] RAM_data_output,
    output[5:0] ROM_address,             // Address to fetch instruction from ROM
    output [31:0] RAM_address,           // Address to read/write in RAM
    output [31:0] RAM_data_input,        // Data to write to RAM
    output RAM_write_enable              // Control signal to write to RAM
    );

    // Decoder outputs
    wire [4:0]  opcode;
    wire [1:0]  mode;
    wire [4:0]  rd;
    wire [4:0]  rs1;
    wire [31:0] immediate;
    wire        load_enable;
    wire        a_mux_control;
    wire        b_mux_control;
    wire        o_mux_control;
    wire        mem_write_control;
    wire        branch_control;

    // Register file outputs
    wire [31:0] bus_a;
    wire [31:0] bus_b;

    // ALU outputs
    wire [31:0] alu_result;
    wire        z_flag;
    wire        n_flag;
    wire        c_flag;
    wire        v_flag;

    // Mux outputs
    wire [31:0] ina_value;
    wire [31:0] inb_value;
    wire [31:0] write_data;

    // PC and IR
    reg [5:0]  pc_reg;
    reg [48:0] ir;


    // Mux logic
    assign ina_value  = a_mux_control ? immediate : bus_a;
    assign inb_value  = b_mux_control ? immediate : bus_b;
    assign write_data = o_mux_control ? RAM_data_output : alu_result;
      
    assign ROM_address    = pc_reg;
    assign RAM_address    = alu_result;
    assign RAM_data_input = bus_a;
    assign RAM_write_enable = mem_write_control;



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
    .Bselect(immediate[4:0]),               // Read address B (source register 2)
    .RL(load_enable),               // Read/Load control
    .clk(clk),  
    .rst(rst)
    );

    Decoder u3(
    .instructionline(ir), // 49-bit instruction from ROM
    .opcode(opcode),                 // 5-bit opcode
    .mode(mode),                     // 2-bit addressing mode
    .rd(rd),                         // 5-bit destination register
    .rsA(rs1),                       // 5-bit source register A
    .immediate(immediate),           // 32-bit immediate value
    .rLoad(load_enable),             // Control signal to load register
    .aMux(a_mux_control),            // Control signal for ALU input A multiplexer
    .bMux(b_mux_control),            // Control signal for ALU input B multiplexer
    .oMux(o_mux_control),            // Control signal for output multiplexer
    .memWrite(mem_write_control),     // Control signal for memory write
    .branch(branch_control)          // Control signal for branching
    );

    always @(posedge clk , posedge rst) begin
        if (rst) begin
            pc_reg <= 0; // Reset PC to 0
            ir <= 0;     // Clear IR
        end else begin
            ir <= ROM_data_input; // Fetch instruction from ROM

            // Update PC based on branch control signal
            if (branch_control) begin
                pc_reg <= pc_reg + immediate[5:0]; // Branch to target address
            end else begin
                pc_reg <= pc_reg + 1; // Move to next instruction
            end
        end
        
    end

endmodule
