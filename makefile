ABC.exe :big3.o fact.o rev.o pal.o main.o
	gcc -o ABC.exe big3.o fact.o rev.o pal.o main.o

main.o : main.c
	gcc -c main.c
big3.o : big3.c
	gcc -c big3.c
fact.o : fact.c
	gcc -c fact.c
rev.o : rev.c
	gcc -c rev.c
pal.o : pal.c
	gcc -c pal.c
