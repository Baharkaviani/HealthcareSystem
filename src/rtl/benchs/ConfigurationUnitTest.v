`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:23:11 01/24/2020
// Design Name:   ConfigurationUnit
// Module Name:   D:/Bahar/Book amirkabir/logic/HW/finalProject/src/rtl/benchs/ConfigurationUnitTest.v
// Project Name:  logicdesignproject-healthcaresystem
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ConfigurationUnit
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module ConfigurationUnitTest;

	// Inputs
	reg clock;
	reg request;
	reg confirm;
	reg [7:0] key;
	reg [7:0] inputData;

	// Outputs
	wire [6:0] dataP;
	wire [6:0] dataQ;

	// Instantiate the Unit Under Test (UUT)
	ConfigurationUnit uut (
		.clock(clock), 
		.request(request), 
		.confirm(confirm), 
		.key(key), 
		.inputData(inputData), 
		.dataP(dataP), 
		.dataQ(dataQ)
	);

	always #40 clock = ~clock;
  initial begin
    // Initialize Inputs
    clock = 0;
    request = 0;
    confirm = 0;
    key = 8'b00000110;
    inputData = 8'b00000000;

    // Wait 100 ns for global reset to finish
    #100;
        
    // Add stimulus here
    //error state
    #50;
    request = 1;
    #20
    confirm = 1;
    #30;
    inputData = 8'b00000100;
    
    //disable state
    #50;
    request = 0;
     
    //register state
    #50;
    request = 1;
    #20
    confirm = 1;
    #30;
    inputData = 8'b00000110;
    
    //change key
    #50;
    key = 8'b10000110;
    #20
    request = 0;
    
    //error state
    #50;
    request = 1;
    #20
    confirm = 1;
    #30;
    inputData = 8'b00000100;
    
    //disable state
    #50;
    request = 0;
     
    //register state
    #50;
    request = 1;
    #20
    confirm = 1;
    #30;
    inputData = 8'b10000110;
  end
	
endmodule

