`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    03:10:31 12/25/2019 
// Design Name: 
// Module Name:    EightBitMux 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module EightBitMux(
     input1,input2,select, out
    );
	input [7:0] input1;
   input [7:0] input2;
   input select;
   output [7:0] out;


	Mux2to1 g1(input1[7],input2[7],select,out[7]);
	Mux2to1 g2(input1[6],input2[6],select,out[6]);
	Mux2to1 g3(input1[5],input2[5],select,out[5]);
	Mux2to1 g4(input1[4],input2[4],select,out[4]);
	Mux2to1 g5(input1[3],input2[3],select,out[3]);
	Mux2to1 g6(input1[2],input2[2],select,out[2]);
	Mux2to1 g7(input1[1],input2[1],select,out[1]);
	Mux2to1 g8(input1[0],input2[0],select,out[0]);

endmodule
