`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:47:07 12/15/2019
// Design Name:   ParityErrorChecker
// Module Name:   D:/Bahar/Book amirkabir/logic/HW/firstphaze/testParityErrorCheckerUnit.v
// Project Name:  LogicCircuitDesignProjectFirstPhase
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ParityErrorChecker
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module testParityErrorCheckerUnit;

	// Inputs
	reg [5:0] data;

	// Outputs
	wire error;

	// Instantiate the Unit Under Test (UUT)
	ParityErrorChecker uut (
		.data(data), 
		.error(error)
	);

	initial begin
		// Initialize Inputs
		data = 0;

		// Wait 100 ns for global reset to finish
		#100;
      // Add stimulus here
		data = 6'b000100;
		
		// Wait 100 ns for global reset to finish
		#100;
      // Add stimulus here
		data = 6'b100100;
		
		// Wait 100 ns for global reset to finish
      #100;
		// Add stimulus here
		data = 6'b101000;
	end
      
endmodule

