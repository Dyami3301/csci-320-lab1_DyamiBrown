lab1.o: lab1.c lab1.h
	gcc -c lab1.c 

main.0: main.c
	gcc -c main.c -o main.o

explode: lab1.o main.c
	gcc -o explode lab1.o main.o


