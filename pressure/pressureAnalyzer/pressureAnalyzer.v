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
---  Module Name: pressureAnalyzer 
-----------------------------------------------------------*/
`timescale 1 ns/1 ns
module pressureAnalyzer(
 pData,
 pWarning);
input [4:0] pData;
output pWarning;
 assign pWarning = (~pData[4] & ~pData[3]) | (pData[4] & pData[3]) | (~pData[3] & pData[2] & pData[1] & pData[0]);
endmodule
