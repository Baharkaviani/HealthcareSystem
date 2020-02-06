`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:56:37 12/17/2019 
// Design Name: 
// Module Name:    oneBitFullAdder 
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
module oneBitFullAdder(
    input A,
    input B,
    input cin,
    output Sum,
    output carry
    );
  wire w1,w2,w3,w4,Bnot;
  xor
    g1(w1, A, B),
    g2(Sum, w1, cin);
  and
    g3(w2, A, B),
    g4(w3, B, cin),
    g6(w4, A, cin);
  or g5(carry, w2, w3, w4);  
endmodule
