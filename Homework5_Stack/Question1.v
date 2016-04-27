`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Question 1
//////////////////////////////////////////////////////////////////////////////////
module aStack #(parameter N = 8, WL = 10)
						(input clk, push, pop, rst, //clock, push, pop, and reset signals
						 input [WL-1:0] din, //input
						 output full, empty,
						 output reg error, //indicates whether stack is full/empty and an error signal
						 output reg [$clog2(N) - 1:0] sp, //stack pointer
						 output reg [WL-1:0] dout ); //data popped from the stack

reg [WL-1:0] myStack [N-1:0];

always@(posedge clk or posedge rst) begin
	if (rst) begin dout <= 0; error <= 0; sp <= 0; end
	else begin
		case ({push,pop})
			2'b01: begin 
					if (empty)
							error <= 1;
					else begin
							dout <= myStack[sp-1];
							error <= 0;
							sp <= sp - 1;
							end
					end
			2'b10: begin 
						if (full)
							error <= 1;
						else begin
								myStack[sp] <= din;
								error <= 0;
								sp <= sp + 1;
								end
					end
			2'b00: begin error <= 0;
						 dout <= 0;
					end
			default: error <= 1;
		endcase
	end
end
assign full = (sp >= N - 1); //assigns whether the stack is full or not
assign empty = (sp == 0);		//assigns whether the stack is empty or not
endmodule

module tb_aStack;
	parameter N = 4;
	parameter WL = 3;
	reg clk, push, pop, rst;
	reg [WL-1:0] din;
	wire full, empty, error;
	wire [$clog2(N) - 1:0] sp;
	wire [WL-1:0] dout;
	
	aStack #(.N(N), .WL(WL)) test1 (.clk(clk), .push(push), .pop(pop), .rst(rst), .din(din),
													.full(full), .empty(empty), .error(error), .sp(sp), .dout(dout));
	
	initial clk = 0;
	always #10 clk = ~clk;
	
	initial begin
	rst = 1; push = 0; pop = 0; din = 0;
	#5 rst = 0;
	#10 push = 1; din = 1;
	#20 din = 2;
	#20 din = 4;
	#20 din = 5;
	#20 din = 7;
	#20 din = 4; 
	#20 push = 0; pop = 1;
	#20 pop = 0; push = 1; din = 3;
	#20 din = 1;
	#20 push = 0; pop = 1;
	#20;
	#20;
	#20;
	#20;
	#20 push = 1; pop = 0; din = 2;
	#20 push = 0;
	//#15
	end

endmodule
