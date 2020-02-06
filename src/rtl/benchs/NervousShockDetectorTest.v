`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:07:03 01/21/2020
// Design Name:   NervousShockDetector
// Module Name:   D:/Bahar/Book amirkabir/logic/HW/finalProject/src/rtl/benchs/NervousShockDetectorTest.v
// Project Name:  logicdesignproject-healthcaresystem
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: NervousShockDetector
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module NervousShockDetectorTest;

	// Inputs
	reg clock;
	reg inputdata;

	// Outputs
	wire [1:0] nervousAbnormality;

	// Instantiate the Unit Under Test (UUT)
	NervousShockDetector uut (
		.clock(clock), 
		.inputdata(inputdata), 
		.nervousAbnormality(nervousAbnormality)
	);
	
	initial 
    begin
     clock = 0;
	  repeat (30)
	  #40 clock = ~clock;
    end
  initial 
    begin
    // Initialize Inputs
    inputdata = 0;
	
    
    // Wait 100 ns for global reset to finish
    #82;
    // Add stimulus here
    inputdata = 1;
    // Wait 100 ns for global reset to finish
    #80;
    // Add stimulus here
    inputdata = 0;
    // Wait 100 ns for global reset to finish
    #80;
    // Add stimulus here
    inputdata = 0;
    // Wait 100 ns for global reset to finish
    #80;
    // Add stimulus here
    inputdata = 1;
    // Wait 100 ns for global reset to finish
    #80;
    // Add stimulus here
    inputdata = 0;
    // Wait 100 ns for global reset to finish
    #80;
    // Add stimuus here
    inputdata = 0;
    // Wait 100 ns for global reset to finish
    #80;
    // Add stimulus here
    inputdata = 1;
    // Wait 100 ns for global reset to finish
    #80;
    // Add stimulus here
    inputdata = 0;
    // Wait 100 ns for global reset to finish
    #80;
    // Add stimulus here
    inputdata = 0;
    // Wait 100 ns for global reset to finish
    #80;
    // Add stimulus here
    inputdata = 1;
  end 
      
endmodule

