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
---  Module Name: fallingDetector 
-----------------------------------------------------------*/
`timescale 1 ns/1 ns
module fallingDetector(
	fdSensorValue,
	fdFactoryValue,
	fallDetected);
	
	input [7:0] fdSensorValue;
	input [7:0] fdFactoryValue;
	output fallDetected;
	wire eq, gt, lt;
	comparator8 CMP(fdSensorValue, fdFactoryValue, 0, 1, 0, lt, eq, gt);
	assign fallDetected = eq | gt;
	
endmodule

module comparator8 (
	input [7:0] A ,
	input [7:0] B ,
	input l ,
	input e ,
	input g ,
	output lt ,
	output et ,
	output gt
);

	wire [1:0]lout;
	wire [1:0]eout;
	wire [1:0]gout;
	comparator3 c1(A[2:0], B[2:0], l, e, g, lout[0], eout[0], gout[0]);
	comparator3 c2(A[5:3], B[5:3], lout[0], eout[0], gout[0], lout[1], eout[1], gout[1]);
	wire [2:0]newB = {1, B[7], B[6]};
	wire [2:0]newA = {1, A[7], A[6]};
	comparator3 c3(newA, newB, lout[1], eout[1], gout[1], lt, et, gt);

endmodule

module comparator3 (
	input [2:0] A ,
	input [2:0] B ,
	input l ,
	input e ,
	input g ,
	output lt ,
	output et ,
	output gt
);

	wire [2:0] xors;
	wire equal, greater, less;
		
	assign xors = {~(A[2] ^ B[2]), ~(A[1] ^ B[1]), ~(A[0] ^ B[0])};
	assign equal = xors[0] & xors[1] & xors[2];
	assign greater = (A[2] & (~B[2])) | (xors[2] & A[1] & (~B[1])) | (xors[2] & xors[1] & A[0] & (~B[0]));
	assign less = (B[2] & (~A[2])) | (xors[2] & B[1] & (~A[1])) | (xors[2] & xors[1] & B[0] & (~A[0]));
	assign gt = greater | (g & equal);
	assign lt = less | (l & equal);
	assign et = equal & e;
	
endmodule
