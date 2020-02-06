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
** Module Name: ParityErrorChecker
**********************************************************
** Additional Comments:
*/

module ParityErrorChecker(
        data,
        error);
input [5:0] data;
output error;
   
   assign error = (^data[4:0]) ^ data[5];

endmodule
