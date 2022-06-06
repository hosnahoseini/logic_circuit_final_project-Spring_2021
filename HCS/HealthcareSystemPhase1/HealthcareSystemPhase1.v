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
---  Module Name: HealthcareSystemPhase1 
-----------------------------------------------------------*/
`timescale 1 ns/1 ns

`include "../FD/fallingDetector/fallingDetector.v"
`include "../PH/bloodAbnormalityDetector/bloodAbnormalityDetector.v"
`include "../TC/temperatureAbnormalityDetector/temperatureAbnormalityDetector.v"
`include "../pressure/pressureAbnormalityDetector/pressureAbnormalityDetector.v"

module HealthcareSystemPhase1(
 pressureData,
 bloodPH,
 bloodType,
 fdSensorValue,
 fdFactoryValue,
 factotyBaseTemp,
 factotyTempCoef,
 tempSensorValue,
 presureAbnormality,
 bloodAbnormality,
 fallDetected,
 temperatureAbnormality);
 
input [5:0] pressureData;
input [3:0] bloodPH;
input [2:0] bloodType;
input [7:0] fdSensorValue;
input [7:0] fdFactoryValue;
input [4:0] factotyBaseTemp;
input [3:0] factotyTempCoef;
input [3:0] tempSensorValue;
output presureAbnormality;
output bloodAbnormality;
output fallDetected;
output temperatureAbnormality;

 pressureAbnormalityDetector PAD(pressureData, presureAbnormality);
 temperatureAbnormalityDetector TAD(factotyBaseTemp, factotyTempCoef, tempSensorValue,temperatureAbnormality);
 fallingDetector FAD(fdSensorValue,fdFactoryValue,fallDetected);
 bloodAbnormalityDetector BAD(bloodPH, bloodType, bloodAbnormality);

endmodule
