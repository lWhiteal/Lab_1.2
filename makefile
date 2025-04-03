program: main.c matrix.c matrix.h
	gcc -Wall -o program main.c matrix.c
clean:
	rm -f program