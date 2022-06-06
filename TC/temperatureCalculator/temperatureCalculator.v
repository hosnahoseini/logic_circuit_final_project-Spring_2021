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
---  Module Name: temperatureCalculator 
-----------------------------------------------------------*/
`timescale 1 ns/1 ns


module temperatureCalculator(
	factoryBaseTemp,
	factoryTempCoef,
	tempSensorValue,
	temperature);
	
	input [4:0] factoryBaseTemp;
	input [3:0] factoryTempCoef;
	input [3:0] tempSensorValue;
	output [7:0] temperature;
	
	wire [7:0]p;
	wire [7:0]p_in;
	wire cout;
	//assign p = factoryTempCoef * tempSensorValue;
	multiplier4x4 MUL(tempSensorValue, factoryTempCoef, p);
	adder_8bit AD8B ({3'b000,factoryBaseTemp}, {3'b000, p[7:3]}, temperature, cout);
endmodule

module multiplier4x4(input [3:0] A ,
							  input [3:0] B ,
							  output [7:0] P);
	wire [3:0] d,e,c;
	wire cout;
	assign P[0] = A[0] & B[0];
	adder_4bit AD1({A[3] & B[1], A[2] & B[1], A[1] & B[1], A[0] & B[1]},
						{0, A[3] & B[0], A[2] & B[0], A[1] & B[0]},{d, P[1]});
	adder_4bit AD2(d,{A[3] & B[2], A[2] & B[2], A[1] & B[2], A[0] & B[2]},{e, P[2]});
	adder_4bit AD3(e,{A[3] & B[3], A[2] & B[3], A[1] & B[3], A[0] & B[3]},{cout,P[7:3]});
	
endmodule

module adder_4bit (
	input [3:0] A ,
	input [3:0] B ,
	output [4:0] S 
);

	wire [3:0] c;
	
	full_adder AD0 (A[0], B[0], 0, S[0], c[0]);
	full_adder AD1 (A[1], B[1], c[0],S[1], c[1]);
	full_adder AD2 (A[2], B[2], c[1],S[2], c[2]);
	full_adder AD3 (A[3], B[3], c[2],S[3], c[3]);
	assign S[4] = c[3];

	
endmodule


module adder_8bit (
	input [7:0] A ,
	input [7:0] B ,
	output [7:0] S ,
	output cout
);

	wire [6:0] c;
	
	full_adder AD0 (A[0], B[0], 0, S[0], c[0]);
	full_adder AD1 (A[1], B[1], c[0],S[1], c[1]);
	full_adder AD2 (A[2], B[2], c[1],S[2], c[2]);
	full_adder AD3 (A[3], B[3], c[2],S[3], c[3]);
	full_adder AD4 (A[4], B[4], c[3],S[4], c[4]);
	full_adder AD5 (A[5], B[5], c[4],S[5], c[5]);
	full_adder AD6 (A[6], B[6], c[5],S[6], c[6]);
	full_adder AD7 (A[7], B[7], c[6],S[7], cout);
	
endmodule

module full_adder (
	input a ,
	input b ,
	input ci ,
	output s ,
	output co
);

	wire ab, bci, aci;
	and g1(ab, a, b);
	and g2(bci, b, ci);
	and g3(aci, a, ci);
			 
	or g4(co, ab, bci, aci);
	xor g5(s, a, b, ci);
	
		
endmodule

