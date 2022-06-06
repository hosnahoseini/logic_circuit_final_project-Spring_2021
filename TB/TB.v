/*--  *******************************************************
--  Computer Architecture Course, Laboratory Sources 
--  Amirkabir University of Technology (Tehran Polytechnic)
--  Department of Computer Engineering (CE-AUT)
--  https://ce[dot]aut[dot]ac[dot]ir
--  *******************************************************
--  All Rights reserved (C) 2019-2020
--  *******************************************************
--  Student ID  : 
--  Student Name: 
--  Student Mail: 
--  *******************************************************
--  Additional Comments:
--
--*/

/*-----------------------------------------------------------
---  Module Name: Decoder Testbench
---  Description: Lab 05 Part 1 Testbench
-----------------------------------------------------------*/
`timescale 1 ns/1 ns
`include "../HCS/HealthcareSystemPhase1/HealthcareSystemPhase1.v"

// test bench of healthCareSystem
module TB();

    reg [5:0] pressureData;     
    reg [3:0] bloodPH;           
    reg [2:0] bloodType;         
    reg [7:0] fdSensorValue;      
    reg [7:0] fdFactoryValue;     
    reg [4:0] factotyBaseTemp;   
    reg [3:0] factotyTempCoef;    
    reg [3:0] tempSensorValue;    

    wire presureAbnormality;      
    wire bloodAbnormality;        
    wire fallDetected;            
    wire temperatureAbnormality;  

    HealthcareSystemPhase1 HCSTB(
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
			temperatureAbnormality
    );



    initial
		begin
		  //module 1
        pressureData = 6'b000000;				
		  //module 2
        bloodPH = 4'b0000;
        bloodType = 3'b000;
		  //module 3
        fdSensorValue = 8'b 00000000;
        fdFactoryValue = 8'b 00000000;
		  //module 4
        factotyBaseTemp = 5'b00000; 
        factotyTempCoef = 4'b0000; 
        tempSensorValue = 4'b0000; 
		  
    
		  //module 1
        pressureData = 6'b111111;				//1
		  #10;
        pressureData = 6'b 001110;		   	//0
		  #10;
		  pressureData = 6'b 111110;				//1
		  #30
		  
		  //module 2
        bloodType = 3'b 110;
			bloodPH = 4'b0110;						//0
			#10;
			bloodPH = 4'b1110;						//1
			#10;
			bloodType = 3'b 010;
			bloodPH = 4'b1000;						//0
			#10;
			bloodPH = 4'b0001;						//1
			#30;			
		  
		  //module 3
		  #30;
			fdFactoryValue = 8'b 00010000;	  	//16
			fdSensorValue = 8'b 00010000;			//1
			#10;
			fdSensorValue = 8'b 00010001;			//1
			#10;
			fdSensorValue = 8'b 00001000;			//0
			#30;
			
		//module 4
		factotyBaseTemp = 5'b11001; factotyTempCoef = 4'b0100; tempSensorValue = 4'b0101; //low
		#10;
		factotyBaseTemp = 5'b11001 ; factotyTempCoef = 4'b1111 ; tempSensorValue = 4'b1111; //high
		#10;
		factotyBaseTemp = 5'b11001; factotyTempCoef = 4'b0111; tempSensorValue = 4'b0111; 	//low
		#10;
		factotyBaseTemp = 5'b10111; factotyTempCoef = 4'b1100; tempSensorValue = 4'b1000;	//35 
		#10;
		factotyBaseTemp = 5'b01000; factotyTempCoef = 4'b1111; tempSensorValue = 4'b1111; 	// 0
		#10;
		factotyBaseTemp = 5'b10110; factotyTempCoef = 4'b1111; tempSensorValue = 4'b1111; 	//high
		#30;
        $finish;
    end

endmodule
