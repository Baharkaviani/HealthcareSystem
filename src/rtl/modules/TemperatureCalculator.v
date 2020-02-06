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
** Module Name: TemperatureCalculator
**********************************************************
** Additional Comments:
*/

module TemperatureCalculator(
        factoryBaseTemp,
        factoryTempCoef,
        tempSensorValue,
        temperature);
input [7:0] factoryBaseTemp;
input [3:0] factoryTempCoef;
input [3:0] tempSensorValue;
output [7:0] temperature;

	wire[7:0]multiplier,divideNumber;
FourBitMultiplier g0(tempSensorValue, factoryTempCoef, multiplier);
EightBitAdder g1(factoryBaseTemp,divideNumber,temperature);

assign
   divideNumber[7] = 0,
   divideNumber[6] = 0,
   divideNumber[5] = 0,
   divideNumber[4] = multiplier[7],
   divideNumber[3] = multiplier[6],
   divideNumber[2] = multiplier[5],
   divideNumber[1] = multiplier[4],
   divideNumber[0] = multiplier[3];
	
endmodule
