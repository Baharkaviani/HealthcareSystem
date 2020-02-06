`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    03:11:17 12/25/2019 
// Design Name: 
// Module Name:    Mux2to1 
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
module Mux2to1(
   input1,input2,select,out
    );
	input input1,input2,select;
	output out;
	wire w1,w2,notSel;
	not g0(notSel,select);
	and g1(w1,input1,notSel);
	and g2(w2,input2,select);
	or g3(out,w1,w2);

endmodule
