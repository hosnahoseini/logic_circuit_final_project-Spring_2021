/*--  *******************************************************
--  Computer Architecture Course, Laboratory Sources 
--  Amirkabir University of Technology (Tehran Polytechnic)
--  Department of Computer Engineering (CE-AUT)
--  https://ce[dot]aut[dot]ac[dot]ir
--  *******************************************************
--  All Rights reserved (C) 2020-2021
--  *******************************************************
--  Student ID  : 
--  Student Name: 
--  Student Mail: 
--  *******************************************************
--  Additional Comments:
--
--*/

/*-----------------------------------------------------------
---  Module Name: bloodAbnormalityDetector 
-----------------------------------------------------------*/
`timescale 1 ns/1 ns
`include "../bloodPHAnalyzer/bloodPHAnalyzer.v"
`include "../bloodTypeClassification/bloodTypeClassification.v"

module bloodAbnormalityDetector(
	bloodPH,
	bloodType,
	bloodAbnormality);
	
	input [3:0] bloodPH;
	input [2:0] bloodType;
	output bloodAbnormality;
	wire bloodClass, abnormalityP, abnormalityQ;
	bloodTypeClassification BTC (bloodType, bloodClass);
	bloodPHAnalyzer BPHA (bloodPH, abnormalityP, abnormalityQ);
	mux2x1 MUX(abnormalityP, abnormalityQ, bloodClass, bloodAbnormality);
	
endmodule

module mux2x1 (A,B,select,OUT);
   input A,B,select;
   output OUT;
   assign OUT = select ? A : B;
endmodule

