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
---  Module Name: Control Unit
---  Description: Module7:
-----------------------------------------------------------*/
`timescale 1 ns/1 ns
`include"../register/register.v"

module system_tb ();

reg        rst ;
reg        clk ;
reg        confirm;
reg  [7:0] Inputdata ;
reg  [3:0] password ;
reg request;
wire 		  write_en ;
wire [6:0] dout_p ;
wire [6:0] dout_q;

ControlUnit CU (rst ,clk ,  request   ,confirm   ,  password  , Inputdata  , write_en ,dout_p ,dout_q);
	
	
	initial
		  begin
		  clk = 0;
				repeat (50)
			#10 clk = ~clk;
		  end

	initial 
		begin
		//reset
		request = 1;
		#5
		rst = 0;
		#20
		confirm = 1;
		
		//save an even data in reg
		rst = 1;
		#20
		password = 4'b1111;
		#20
		Inputdata = 8'b11010001;
		#20
		
		//reset
		rst = 0;
		#40
		
		//save an odd data in reg
		rst = 1;
		password = 4'b1111;
		#40
		Inputdata = 8'b00001011;
		#20
		
		//reset
		rst = 0;
		#20
		
		//try to write data when its reset!!!
		password = 4'b1111;
		#20
		Inputdata = 8'b11111010;
		#20
		
		//try to save with wrong pasword --> trap
		rst = 1;
		#20
		password = 4'b0000;
		#20
		Inputdata = 8'b10001111;
		#20
		
		//reset
		rst = 0;
		#20
		
		//write an other even data
		rst = 1;
		#20
		password = 4'b1111;
		#20
		Inputdata = 8'b00110110;
		#50
	
		$finish;
	
	end
	
endmodule


module ControlUnit (
	input         rst      , // async  reset
	input         clk       , // clock  posedge
	input         request   , // request input (asynch) 
	input         confirm   , // confirm input 
	input  [ 3:0] password  , // password from user
	input  [7:0] Inputdata  , // Input data from user
	output        write_en,   // conf mem write enable
	output [6:0] dout_p ,
	output [6:0] dout_q 
	);
	
	wire [6:0] dout_p;
	wire [6:0] dout_q;
	wire [6:0] dout;
	controller CONTROLLER ( rst, clk, confirm, Inputdata, password, en_p, en_q, dout);
	register P(1, clk, en_p, dout, dout_p);
	register Q(1, clk, en_q, dout, dout_q);
	assign write_en   = en_p ? 1 : 0;


					
endmodule


module controller (
	input        rst ,
	input        clk ,
	input        confirm ,
	input  [7:0] data ,
	input  [3:0] pass ,
	output       en_p ,
	output       en_q ,
	output  [6:0] dout
);

parameter STATE_IDLE    =3'b001;
parameter STATE_ACTIVE  =3'b010;
parameter STATE_REQUEST =3'b011;
parameter STATE_STORE   =3'b100;
parameter STATE_TRAP    =3'b101;
parameter STATE_OTHERS  =3'b111;

	parameter correct_pass = 4'b1111;
	
	reg [2:0] state;
	reg en_p, en_q;
	reg [6:0] dout;
	
	
	always @(posedge clk or negedge rst)
		begin
			
			if(rst == 0)
				begin
					state = STATE_IDLE;
				end

			else case(state)
				STATE_IDLE : state = STATE_ACTIVE;
				
				STATE_ACTIVE : 
					begin
						if(confirm && pass == correct_pass)
							state = STATE_REQUEST;
						else if(confirm && pass != correct_pass)
							state = STATE_TRAP;
						else
							state = STATE_ACTIVE;
					end
				
					
				STATE_TRAP : state = STATE_TRAP;
				
				STATE_REQUEST: 
					begin
						if(data[7] && confirm)
							begin
								en_q = 1;
								dout = data [6:0];
								state = STATE_STORE;
								en_p = 0;
							end
						else if(data[7] == 0 && confirm)
							begin
								en_p = 1;
								dout = data [6:0];
								state = STATE_STORE;
								en_q = 0;
							end
						else
							state = STATE_REQUEST;
					end
					
				STATE_STORE : state = STATE_STORE;
				
			endcase
		end
endmodule
