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
---  Module Name: bloodTypeClassification
-----------------------------------------------------------*/
`timescale 1 ns/1 ns
module bloodTypeClassification(
	bloodType,
	bloodClass);
	
	input [2:0] bloodType;
	output bloodClass;
	multiplexer4x1 MUL({0,0,1,1}, bloodType[2:1], bloodClass);

endmodule

module multiplexer4x1 (
	input [3:0] w ,
	input [1:0]	sel ,
	output [3:0] y
);
	wire [1:0] selnot;
	
	not g1(selnot[0], sel[0]);
	not g2(selnot[1], sel[1]);
	and g3(y[0], selnot[0], selnot[1], w[0]);
	and g4(y[1], sel[0], selnot[1], w[1]);
	and g5(y[2], selnot[0], sel[1], w[2]);
	and g6(y[3], sel[0], sel[1], w[3]);

endmodule



