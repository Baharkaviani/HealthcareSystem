`timescale 1ns / 1ps
`default_nettype none

/*
**********************************************************
** Logic Design Final Project Fall, 2019 Semester
** Amirkabir University of Technology (Tehran Polytechnic)
** Department of Computer Engineering (CEIT-AUT)
** Logic Circuit Design Laboratory
** https://ceit.aut.ac.ir
**********************************************************
** Student ID: XXXXXXX
** Student ID: XXXXXXX
**********************************************************
** Module Name: LogicHealthcareSystemController
**********************************************************
** Additional Comments:
*/

module LogicHealthcareSystemController(  
    clock,
    presureAbnormality,
    bloodAbnormality,
    fallDetected,
    temperatureAbnormality,
    nervousAbnormality,
    abnormaliryWarning);
  
input clock;
input presureAbnormality;
input bloodAbnormality;
input fallDetected;
input temperatureAbnormality;
input [1:0] nervousAbnormality;
output [2:0] abnormaliryWarning;

	reg [2:0]state;
	wire[5:0] inputData = {presureAbnormality, bloodAbnormality, fallDetected, temperatureAbnormality, nervousAbnormality};
	
	parameter s0 = 3'b000,
        s1 = 3'b001,
        s2 = 3'b010,
        s3 = 3'b011,
        s4 = 3'b100,
        s5 = 3'b101,
        s6 = 3'b110;
	
	initial
	state = 3'b000;
	
	always @ (posedge clock)
		case (inputData)
			//0
			6'b000000: 
				state = s0;
				
			//1
			6'b000001: 
				state = s1;
			6'b000010: 
				state = s1;
			6'b000100: 
				state = s1;
			6'b001000: 
				state = s1;
			6'b010000: 
				state = s1;
			6'b100000: 
				state = s1;
				
			//2
			6'b000011: 
				state = s2;
			6'b000101: 
				state = s2;
			6'b001001: 
				state = s2;
			6'b010001: 
				state = s2;
			6'b100001: 
				state = s2;
			6'b000110: 
				state = s2;
			6'b001010: 
				state = s2;
			6'b010010: 
				state = s2;
			6'b100010: 
				state = s2;
			6'b001100: 
				state = s2;
			6'b010100:
				state = s2;
			6'b100100: 
				state = s2;
			6'b011000: 
				state = s2;
			6'b101000: 
				state = s2;
			6'b110000: 
				state = s2;
				
			//3
			6'b000111: 
				state = s3;
			6'b001011: 
				state = s3;
			6'b010011: 
				state = s3;
			6'b100011: 
				state = s3;
			6'b001101: 
				state = s3;
			6'b010101: 
				state = s3;
			6'b100101: 
				state = s3;
			6'b011001: 
				state = s3;
			6'b101001: 
				state = s3;
			6'b110001: 
				state = s3;
			6'b001110: 
				state = s3;
			6'b010110:
				state = s3;
			6'b100110: 
				state = s3;
			6'b011010: 
				state = s3;
			6'b101010: 
				state = s3;
			6'b110010: 
				state = s3;
			6'b011100: 
				state = s3;
			6'b101100: 
				state = s3;
			6'b110100: 
				state = s3;
			6'b111000: 
				state = s3;
				
			//4
			6'b001111: 
				state = s4;
			6'b010111: 
				state = s4;
			6'b100111: 
				state = s4;
			6'b011011: 
				state = s4;
			6'b101011: 
				state = s4;
			6'b110011: 
				state = s4;
			6'b011101: 
				state = s4;
			6'b101101: 
				state = s4;
			6'b110101: 
				state = s4;
			6'b111001: 
				state = s4;
			6'b011110:
				state = s4;
			6'b101110: 
				state = s4;
			6'b110110: 
				state = s4;
			6'b111010: 
				state = s4;
			6'b111100: 
				state = s4;
				
			//5
			6'b011111: 
				state = s5;
			6'b101111: 
				state = s5;
			6'b110011: 
				state = s5;
			6'b111011: 
				state = s5;
			6'b111101: 
				state = s5;
			6'b111110: 
				state = s5;
				
			//6
			6'b111111: 
				state = s6;
		endcase
		
		assign abnormaliryWarning = state;

endmodule
