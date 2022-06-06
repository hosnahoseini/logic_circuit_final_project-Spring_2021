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
---  Module Name: parityErrorChecker 
-----------------------------------------------------------*/
`timescale 1 ns/1 ns

module parityErrorChecker(
 data,
 error);
input [5:0] data;
output error;
 assign error = (data[0] ^ data[1] ^ data[2] ^ data[3] ^ data[4] ^ data[5]);
 
endmodule
