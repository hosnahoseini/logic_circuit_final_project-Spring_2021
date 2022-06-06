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
---  Module Name: bloodPHAnalyzer
-----------------------------------------------------------*/
`timescale 1 ns/1 ns
module bloodPHAnalyzer(
	bloodPH,
	abnormalityP,
	abnormalityQ);
	
	input [3:0] bloodPH;
	output abnormalityP;
	output abnormalityQ;
	wire [15:0] m;
	
	decoder4x16 DEC(bloodPH, 1, m);
	
	assign abnormalityP = ~(m[7] | m[8]);
	assign abnormalityQ = ~(m[6] | m[7] | m[8] | m[9]);
	
endmodule


module decoder4x16 (
	input [3:0] in ,
	input 		en ,
	output [15:0] dout
);
	
	wire [3:0]first_decoder;
	decoder2x4 d1(in[3:2], en, first_decoder);
	decoder2x4 d2(in[1:0], first_decoder[0], dout[3:0]);
	decoder2x4 d3(in[1:0], first_decoder[1], dout[7:4]);
	decoder2x4 d4(in[1:0], first_decoder[2], dout[11:8]);
	decoder2x4 d5(in[1:0], first_decoder[3], dout[15:12]);

endmodule

module decoder2x4 (
	input [1:0] in ,
	input en ,
	output [3:0] dout
);
	wire [1:0] innot;
	
	not g1(innot[1], in[1]);
	not g2(innot[0], in[0]);
	and g3(dout[0], innot[1], innot[0], en);
	and g4(dout[1], innot[1], in[0], en);
	and g5(dout[2], in[1], innot[0], en);
	and g6(dout[3], in[1], in[0], en);
	

endmodule




