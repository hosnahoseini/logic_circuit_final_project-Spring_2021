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
---  Module Name: temperatureAnalyzer 
-----------------------------------------------------------*/
`timescale 1 ns/1 ns



module temperatureAnalyzer(
 temperature,
 highTempAbnormality,
 lowTempAbnormality);
input [7:0] temperature;
output lowTempAbnormality;
output highTempAbnormality;
 assign lowTempAbnormality = (temperature < 35);
 assign highTempAbnormality = (temperature > 39);
endmodule
