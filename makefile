all: threads.c
	gcc -o test threads.c -pthread
