lab1.o: lab1.c lab1.h
	gcc -o lab1.c lab1.h

_explode_: lab1.o main.o
	gcc -o explode lab1.o main.o
