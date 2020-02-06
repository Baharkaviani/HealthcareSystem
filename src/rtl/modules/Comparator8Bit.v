
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
** Module Name: Comparator8Bit
**********************************************************
** Additional Comments:
*/

module Comparator8Bit(
        inputP,
        inputQ,
        pEqualToQ,
        pGreaterThanQ
        );
input [7:0] inputP;
input [7:0] inputQ;
output pEqualToQ;
output pGreaterThanQ;

   wire w1, w2 ,eq0, eq1, eq2, gt0 ,gt1 ,gt2, lt0, lt1, lt2;
	comparator3bit 
		c0(0, 0, inputP[7:6], inputQ[7:6], gt0, eq0, lt0),
		c1(inputP[5], inputQ[5], inputP[4:3], inputQ[4:3], gt1, eq1, lt1),
		c2(inputP[2], inputQ[2], inputP[1:0], inputQ[1:0], gt2, eq2, lt2);
	and 
		g1(pEqualToQ, eq0, eq1, eq2),
		g2(w1, eq0, gt1),
		g3(w2, eq0, eq1, gt2);
	or g4(pGreaterThanQ, gt0, w1, w2);
   
endmodule
