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
** Module Name: NervousShockDetector
**********************************************************
** Additional Comments:
*/

module NervousShockDetector(
        clock,
        inputdata,
     nervousAbnormality);

input clock;
input inputdata;
output [1:0] nervousAbnormality;
  reg [1:0] nervousAbnormality;
  reg [4:0] state;
  parameter s0 = 5'b00000,
        s1 = 5'b00001,
        s2 = 5'b00010,
        s3 = 5'b00011,
        s4 = 5'b00100,
        s5 = 5'b00101,
        s6 = 5'b00110,
        s7 = 5'b00111,
        s8 = 5'b01000,
        s9 = 5'b01001,
        s10 = 5'b01010,
        s11 = 5'b01011,
        s12 = 5'b01100,
        s13 = 5'b01101,
        s14 = 5'b01110,
        s15 = 5'b01111,
        s16 = 5'b10000,
        s17 = 5'b10001,
        s18 = 5'b10010,
        s19 = 5'b10011,
        s20 = 5'b10100;
        
  initial
  state = 5'b00000;
  always @ (posedge clock)
    case (state)
      //s0
      s0: 
      if(inputdata)
        begin
          state = s1;
          nervousAbnormality <= 2'b00;
        end
      else
        begin
          state = s0;
          nervousAbnormality <= 2'b00;
        end
      //s1
      s1: 
      if(inputdata)
        begin
          state = s1;
          nervousAbnormality <= 2'b00;
        end
      else
        begin
          state = s2;
          nervousAbnormality <= 2'b00;
        end
      //s2
      s2: 
      if(inputdata)
        begin
          state = s3;
          nervousAbnormality <= 2'b00;
        end
      else
        begin
          state = s20;
          nervousAbnormality <= 2'b00;
        end
      //s3
      s3: 
      if(inputdata)
        begin
          state = s1;
          nervousAbnormality <= 2'b00;
        end
      else
        begin
          state = s4;
          nervousAbnormality <= 2'b00;
        end
      //s4
      s4: 
      if(inputdata)
        begin
          state = s5;
          nervousAbnormality <= 2'b00;
        end
      else
        begin
          state = s20;
          nervousAbnormality <= 2'b00;
        end
      //s5
      s5: 
      if(inputdata)
        begin
          state = s1;
          nervousAbnormality <= 2'b00;
        end
      else
        begin
          state = s6;
          nervousAbnormality <= 2'b00;
        end
      //s6
      s6: 
      if(inputdata)
        begin
          state = s7;
          nervousAbnormality <= 2'b00;
        end
      else
        begin
          state = s20;
          nervousAbnormality <= 2'b00;
        end
      //s7
      s7: 
      if(inputdata)
        begin
          state = s11;
          nervousAbnormality <= 2'b00;
        end
      else
        begin
          state = s8;
          nervousAbnormality <= 2'b00;
        end
      //s8
      s8: 
      if(inputdata)
        begin
          state = s9;
          nervousAbnormality <= 2'b00;
        end
      else
        begin
          state = s20;
          nervousAbnormality <= 2'b00;
        end
      //s9
      s9: 
      if(inputdata)
        begin
          state = s1;
          nervousAbnormality <= 2'b00;
        end
      else
        begin
          state = s10;
          nervousAbnormality <= 2'b11;
        end
      //s10
      s10: 
      if(inputdata)
        begin
          state = s9;
          nervousAbnormality <= 2'b00;
        end
      else
        begin
          state = s20;
          nervousAbnormality <= 2'b00;
        end
      //s11
      s11: 
      if(inputdata)
        begin
          state = s12;
          nervousAbnormality <= 2'b00;
        end
      else
        begin
          state = s2;
          nervousAbnormality <= 2'b00;
        end
      //s12
      s12: 
      if(inputdata)
        begin
          state = s1;
          nervousAbnormality <= 2'b00;
        end
      else
        begin
          state = s13;
          nervousAbnormality <= 2'b10;
        end
      //s13
      s13: 
      if(inputdata)
        begin
          state = s3;
          nervousAbnormality <= 2'b00;
        end
      else
        begin
          state = s20;
          nervousAbnormality <= 2'b00;
        end
      //s14
      s14: 
      if(inputdata)
        begin
          state = s1;
			 nervousAbnormality <= 2'b00;
  end
      else
        begin
          state = s15;
          nervousAbnormality <= 2'b00;
        end
      //s15
      s15: 
      if(inputdata)
        begin
          state = s3;
          nervousAbnormality <= 2'b00;
        end
      else
        begin
          state = s16;
          nervousAbnormality <= 2'b00;
        end
      //s16
      s16: 
      if(inputdata)
        begin
          state = s17;
          nervousAbnormality <= 2'b00;
        end
      else
        begin
          state = s0;
          nervousAbnormality <= 2'b00;
        end
      //s17
      s17: 
      if(inputdata)
        begin
          state = s1;
          nervousAbnormality <= 2'b00;
        end
      else
        begin
          state = s18;
          nervousAbnormality <= 2'b00;
        end
      //s18
      s18: 
      if(inputdata)
        begin
          state = s3;
          nervousAbnormality <= 2'b00;
        end
      else
        begin
          state = s19;
          nervousAbnormality <= 2'b01;
        end
      //s19
      s19: 
      if(inputdata)
        begin
          state = s14;
          nervousAbnormality <= 2'b00;
        end
      else
        begin
          state = s0;
          nervousAbnormality <= 2'b00;
        end
      //s20
      s20: 
      if(inputdata)
        begin
          state = s14;
          nervousAbnormality <= 2'b00;
        end
      else
        begin
          state = s0;
          nervousAbnormality <= 2'b00;
        end
      endcase
endmodule
