`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:27:48 07/23/2021 
// Design Name: 
// Module Name:    TB 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module TB();

	// Regs
	reg [4:0] factotyBaseTemp;
	reg [3:0] factotyTempCoef;
	reg [3:0] tempSensorValue;
	// Outputs
	wire lowTempAbnormality;
	wire highTempAbnormality;
	wire tempAbnormality;


	// test bench module
	temperatureAbnormalityDetector test_temperatureAbnormalityDetector (
		.factotyBaseTemp(factotyBaseTemp), .factotyTempCoef(factotyTempCoef), .tempSensorValue(tempSensorValue),.tempAbnormality(tempAbnormality), .lowTempAbnormality(lowTempAbnormality), .highTempAbnormality(highTempAbnormality)
	); 

	initial 
		begin 
		
		factotyBaseTemp = 5'b11001; factotyTempCoef = 4'b0100; tempSensorValue = 4'b0101; 
		#100;
		factotyBaseTemp = 5'b11001 ; factotyTempCoef = 4'b1111 ; tempSensorValue = 4'b1111 ; 
		#100;
		factotyBaseTemp = 5'b11001; factotyTempCoef = 4'b1111; tempSensorValue = 4'b1111; 
		#100;
		factotyBaseTemp = 5'b11001; factotyTempCoef = 4'b0111; tempSensorValue = 4'b0111; 
		#100;
		factotyBaseTemp = 5'b11001; factotyTempCoef = 4'b0011; tempSensorValue = 4'b0111; 
		#100;
		factotyBaseTemp = 5'b11111; factotyTempCoef = 4'b1000; tempSensorValue = 4'b0111; 
		#100;
		factotyBaseTemp = 5'b11111; factotyTempCoef = 4'b1000; tempSensorValue = 4'b1001; 
		#100;
		factotyBaseTemp = 5'b11111; factotyTempCoef = 4'b1000; tempSensorValue = 4'b1000; 
		#100;
		factotyBaseTemp = 5'b10001; factotyTempCoef = 4'b1111; tempSensorValue = 4'b1111; 
		#100;
		factotyBaseTemp = 5'b10001; factotyTempCoef = 4'b1111; tempSensorValue = 4'b1111; 
		#100;
		factotyBaseTemp = 5'b10001; factotyTempCoef = 4'b1111; tempSensorValue = 4'b1111; 
		#100;
		factotyBaseTemp = 5'b10001; factotyTempCoef = 4'b1111; tempSensorValue = 4'b1111; 
		#100;
		factotyBaseTemp = 5'b10001; factotyTempCoef = 4'b1111; tempSensorValue = 4'b1111; 
		#100;
		factotyBaseTemp = 5'b10001; factotyTempCoef = 4'b1111; tempSensorValue = 4'b1111; 
		#100;
		factotyBaseTemp = 5'b10001; factotyTempCoef = 4'b1111; tempSensorValue = 4'b1111; 
		#100;
		factotyBaseTemp = 5'b10001; factotyTempCoef = 4'b1111; tempSensorValue = 4'b1111; 
		#100;
		
		
		$finish;

	end
      
endmodule
