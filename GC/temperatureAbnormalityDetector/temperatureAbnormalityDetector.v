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
---  Module Name: temperatureAbnormalityDetector
-----------------------------------------------------------*/
`timescale 1 ns/1 ns

module tb ();

reg [7:0] bloodSensor;
wire [3:0] glycemicIndex;

	temperatureAbnormalityDetector TAD(bloodSensor, glycemicIndex);


	initial 
		begin
		
		bloodSensor = 8'b10110011;		// - 4 
		#10;
		bloodSensor = 8'b10000011;		// - 6
		#10;
		bloodSensor = 8'b01110011;	   //+ 5
		#10;
		bloodSensor = 8'b00001001;    //+ 2
		#10;
		$finish;
	end

endmodule


module temperatureAbnormalityDetector(
	bloodSensor,
	glycemicIndex);
	input [7:0] bloodSensor;
	output [3:0] glycemicIndex;
	wire [7:0] absBloodSensor;
 
	absoluteCalculator AC (bloodSensor, absBloodSensor);
	countingOnes CO (absBloodSensor, glycemicIndex);
 
endmodule

module absoluteCalculator(
	bloodSensor,
	absBloodSensor);
	
	input [7:0] bloodSensor;
	output [7:0] absBloodSensor;
	wire [8:0] complement2;
	
	assign complement2 = 9'b100000000 - bloodSensor;
	multiplexer8bit2x1 MUX8 (bloodSensor,complement2[7:0], bloodSensor[7], absBloodSensor);

endmodule

module countingOnes(
	absBloodSensor,
	glycemicIndex);
	
	input [7:0] absBloodSensor;
	output [3:0] glycemicIndex;
	
	assign glycemicIndex = absBloodSensor[0] + absBloodSensor [1] +
									absBloodSensor[2] + absBloodSensor [3] +
									absBloodSensor[4] + absBloodSensor [5] +
									absBloodSensor[6] + absBloodSensor [7] ;
	

endmodule

module multiplexer8bit2x1 (
	input [7:0] A ,
	input [7:0] B ,
	input sel,
	output [7:0] out
);
	
	multiplexer2x1 mux1(A[0], B[0], sel, out[0]);  
	multiplexer2x1 mux2(A[1], B[1], sel, out[1]);  
	multiplexer2x1 mux3(A[2], B[2], sel, out[2]);  
	multiplexer2x1 mux4(A[3], B[3], sel, out[3]);  
	multiplexer2x1 mux5(A[4], B[4], sel, out[4]);  
	multiplexer2x1 mux6(A[5], B[5], sel, out[5]);  
	multiplexer2x1 mux7(A[6], B[6], sel, out[6]);  
	multiplexer2x1 mux8(A[7], B[7], sel, out[7]);  
	
endmodule

module multiplexer2x1 (
	input  A ,
	input  B ,
	input sel,
	output out
);

	assign out = (A & (~sel)) | (B & (sel));
endmodule
