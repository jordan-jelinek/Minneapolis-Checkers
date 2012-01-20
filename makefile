all:
	clear
	g++ main.cpp include/menu.cpp -o .o
	./.o 1> output.txt 2> error.log
	nano output.txt
