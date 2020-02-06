`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:06:39 12/18/2019 
// Design Name: 
// Module Name:    FourBitAdder 
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
module FourBitAdder(
    input [3:0]A,
    input [3:0]B,
    output [3:0]sum,
	 output cout
    );
   wire [2:0]carry;
	oneBitFullAdder 
		g0(A[0], B[0], 0, sum[0], carry[0]),
		g1(A[1], B[1], carry[0], sum[1], carry[1]),
		g2(A[2], B[2], carry[1], sum[2], carry[2]),
		g3(A[3], B[3], carry[2], sum[3], cout);

endmodule
