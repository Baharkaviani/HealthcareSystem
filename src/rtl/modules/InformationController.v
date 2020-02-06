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
** Module Name: InformationController
**********************************************************
** Additional Comments:
*/

module InformationController(
      clock,
      request,
     confirm,
     password,
     key,
     writeRegP,
     writeRegQ);

input clock;
input request;
input confirm;
input [7:0] password;
input [7:0] key;

output writeRegP;
output writeRegQ;
reg writeRegP;
reg writeRegQ;
reg [2:0]state;

	parameter s0 = 3'b000, s1 = 3'b001, s2 = 3'b101, s3 = 3'b111, s4 = 3'b110;
	//S0 = disable
	//S1 = active
	//S2 = request
	//S3 = error
	//S4 = register
	
	initial
	begin
		state = 3'b000;
		writeRegQ = 1'b0;
		writeRegP = 1'b0;
	end
	
	always @ (posedge clock or key or confirm or request)
      case(state)
			//s0
			s0 :
				if (request) state = s1;
			//s1
			s1 :
			if(~request)  state = s0;
			else if(confirm)
			begin
				if(key == password)
					state = s2;
				else
					state = s3;
			end
			//s2
			s2 :
			if(~request)  state = s0;
			else if(confirm)
				begin
				if(key != password)
					state = s4;
				end
			//s3
			s3 :
				if(~request)  state = s0;
			//s4
			s4 :
				if(~request)  state = s0;  
				else 
				begin 
					if(key[7])
					begin
						writeRegQ = 1'b1;
						writeRegP = 1'b0;
					end  
					else
					begin
						writeRegQ = 1'b0;
						writeRegP = 1'b1;
					end
				end  
    endcase    
  
endmodule
