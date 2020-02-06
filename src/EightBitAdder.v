`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:09:16 12/18/2019 
// Design Name: 
// Module Name:    EightBitAdder 
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
module EightBitAdder(
    input [7:0]A,
    input [7:0]B,
    output [7:0]sum
    );
   wire [7:0]carry;
	oneBitFullAdder 
    g0(A[0], B[0], 0, sum[0], carry[0]),
    g1(A[1], B[1], carry[0], sum[1], carry[1]),
    g2(A[2], B[2], carry[1], sum[2], carry[2]),
    g3(A[3], B[3], carry[2], sum[3], carry[3]),
    g4(A[4], B[4], carry[3], sum[4], carry[4]),
    g5(A[5], B[5], carry[4], sum[5], carry[5]),
    g6(A[6], B[6], carry[5], sum[6], carry[6]),
    g7(A[7], B[7], carry[6], sum[7], carry[7]);

endmodule