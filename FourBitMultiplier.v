`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:01:08 12/17/2019 
// Design Name: 
// Module Name:    FourBitMultiplier 
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
module FourBitMultiplier(
    input [3:0]A,
    input [3:0]B,
    output [7:0]result
    );
	wire w0, w1 
	and
		g0(result[0], A[0], B[0]),
		
		g1(w0, A[1], B[0]),
		g2(w1, A[0], B[1]),
		
		g3(w2, A[2], B[0]),
		g4(w3, A[1], B[1]),
		g5(w4, A[0], B[2]),
		
		g6(w5, A[3], B[0]),
		g7(w6, A[2], B[1]),
		g8(w7, A[1], B[2]),
		g9(w8, A[0], B[3]),
		
		g10(w9, A[3], B[1]),
		g11(w10, A[2], B[2]),
		g12(w11, A[1], B[3]),
		
		g13(w12, A[3], B[2]),
		g14(w13, A[2], B[3]),
		
		g15(w14, A[3], B[3]);
	
	FourBitAdder
		g16(result[1], )

endmodule
