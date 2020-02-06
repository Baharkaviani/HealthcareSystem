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
** Module Name:PressureAnalyzer
**********************************************************
** Additional Comments:
*/

module PressureAnalyzer(
        pData,
        pWarning);
input [4:0] pData;
output pWarning;
   
	wire bnot,cnot,dnot,enot,fnot,w1,w2,w3,w4;
  not 
    g0(bnot,pData[4]),
    g1(cnot,pData[3]);
  and
    g5(w1,bnot,cnot),
    g6(w2,pData[4],pData[3]),
    g7(w3,pData[4],cnot,pData[2],pData[1],pData[0]);
  or result(pWarning,w1, w2, w3);
  
endmodule
