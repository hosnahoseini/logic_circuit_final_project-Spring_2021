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
---  Module Name: Register 
-----------------------------------------------------------*/
`timescale 1 ns/1 ns

module register (
	input			 rst,
	input        clk ,
	input        en ,
	input  [6:0] din ,
	output [6:0] qout
);

	reg [6:0] qout;
	
	always @ (posedge clk or negedge rst)
		begin 
			if(en)
				qout <= din;
		end

endmodule
