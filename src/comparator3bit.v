`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:01:28 12/16/2019 
// Design Name: 
// Module Name:    comparator3bit 
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
module comparator3bit(
	input A2,
	input B2,
   input [1:0]A,
   input [1:0]B,
   output Gt,
	output Eq,
	output Lt
    );
	 
	wire w0, w1, w2, w3, w4, w5, B0not, B1not, B2not;
	
	xnor g5(w2, A2, B2);
	xnor g6(w1, A[1], B[1]);
	xnor g11(w0, A[0], B[0]);
	not
		g7(B2not, B2),
		g8(B1not, B[1]),
		g9(B0not, B[0]);
	and
		g1(w3, A[0], B0not, w1, w2),
		g2(w4, A[1], B1not, w2),
		g3(w5, A2, B2not),
		g12(Eq, w2, w1, w0);
	or g4(Gt, w3, w4, w5);
	nor g13(Lt, Eq, Gt);

endmodule
