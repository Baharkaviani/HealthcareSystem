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
	wire [3:0]w, q, e, r, t, y;
	wire [3:0]sum1, sum2, sum3;
	wire cout1, cout2, cout3;
	and
		g0(result[0], A[0], B[0]),
		
		g1(w[0], A[1], B[0]),
		g2(q[0], A[0], B[1]),
		
		g3(w[1], A[2], B[0]),
		g4(q[1], A[1], B[1]),
		g5(e[0], A[0], B[2]),
		
		g6(w[2], A[3], B[0]),
		g7(q[2], A[2], B[1]),
		g8(e[1], A[1], B[2]),
		g9(t[0], A[0], B[3]),
		
		g10(q[3], A[3], B[1]),
		g11(e[2], A[2], B[2]),
		g12(t[1], A[1], B[3]),
		
		g13(e[3], A[3], B[2]),
		g14(t[2], A[2], B[3]),
		
		g15(t[3], A[3], B[3]);
		
	assign
		w[3] = 0,
		result[1] = sum1[0],
		r[3] = cout1,
		r[2] = sum1[3],
		r[1] = sum1[2],
		r[0] = sum1[1],
		result[2] = sum2[0],
		y[3] = cout2,
		y[2] = sum2[3],
		y[1] = sum2[2],
		y[0] = sum2[1],
		result[3] = sum3[0],
		result[4] = sum3[1],
		result[5] = sum3[2],
		result[6] = sum3[3],
		result[7] = cout3;
	
	FourBitAdder
		g16(q, w, sum1, cout1),
		g17(e, r, sum2, cout2),
		g18(t, y, sum3, cout3);
	
endmodule
