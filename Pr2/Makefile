Fucn: init output del

init: Main.c Func_G.c Func_F.c
	g++ -c Main.c -o Main.o
	g++ -c Func_F.c -o Func_F.o
	g++ -c Func_G.c -o Func_G.o
	g++ Main.o Func_G.o Func_F.o  -o Pr2

output: init
	./Pr2

del: init
	rm Pr2
	rm Main.o
	rm Func_F.o
	rm Func_G.o
