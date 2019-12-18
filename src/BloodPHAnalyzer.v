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
** Module Name:
**********************************************************
** Additional Comments:
*/

module BloodPHAnalyzer(
        bloodPH,
        abnormalityP,
        abnormalityQ);
	input [3:0] bloodPH;
	output abnormalityP;
	output abnormalityQ;
	wire PH3not, PH2not, PH1not, PH0not, w1, w2, w3, w4;
	not
		n3(PH3not, bloodPH[3]),
		n2(PH2not, bloodPH[2]),
		n1(PH1not, bloodPH[1]),
		n0(PH0not, bloodPH[0]);
	or
		g0(w1, PH3not, bloodPH[2], bloodPH[1], bloodPH[0]),
		g1(w2, bloodPH[3], PH2not, PH1not, PH0not),
		g3(w3, PH3not, bloodPH[2], bloodPH[1]),
		g4(w4, bloodPH[3], PH2not, PH1not);
	and
		g2(abnormalityP, w1, w2),
		g5(abnormalityQ, w3, w4);
endmodule
