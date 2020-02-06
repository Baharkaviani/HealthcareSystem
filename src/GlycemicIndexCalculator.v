`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    03:06:09 12/25/2019 
// Design Name: 
// Module Name:    GlycemicIndexCalculator 
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
module GlycemicIndexCalculator(
        bloodSensor,
        glycemicIndex);
	input [7:0] bloodSensor;
	output [3:0] glycemicIndex;
	wire [7:0] notbloodSensor , towsComplement,absoluteNum,sum1,sum2,sum3,sum4,sum5,sum6,endsum;
	not g1(notbloodSensor[7],bloodSensor[7]),
		g2(notbloodSensor[6],bloodSensor[6]),
		g3(notbloodSensor[5],bloodSensor[5]),
		g4(notbloodSensor[4],bloodSensor[4]),
		g5(notbloodSensor[3],bloodSensor[3]),
		g6(notbloodSensor[2],bloodSensor[2]),
		g7(notbloodSensor[1],bloodSensor[1]),
		g8(notbloodSensor[0],bloodSensor[0]);
   
	EightBitMux g10(bloodSensor,towsComplement,bloodSensor[7],absoluteNum);
  
	EightBitAdder 
		g9 (notbloodSensor , {7'b0, 1} , towsComplement),
		g11({7'b0, absoluteNum[7]},{7'b0, absoluteNum[6]},sum1),
		g12({7'b0, absoluteNum[5]},{7'b0, absoluteNum[4]},sum2),
		g13({7'b0, absoluteNum[3]},{7'b0, absoluteNum[2]},sum3),
		g14({7'b0, absoluteNum[1]},{7'b0, absoluteNum[0]},sum4),
		g15(sum1,sum2,sum5),
		g16(sum3,sum4,sum6),
		g17(sum5,sum6,endsum);
  
	assign
      glycemicIndex[3] = endsum[3],
      glycemicIndex[2] = endsum[2],
      glycemicIndex[1] = endsum[1],
      glycemicIndex[0] = endsum[0];
  
endmodule
