all: test

test: test.o	
	gcc -Wall -g -o test test.o

test.o: test.c betterstring.h
	gcc -Wall -g -c -o test.o test.c
