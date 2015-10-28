CC = gcc

test: main.o
	${CC} -g -o test main.o

main.o: main.c
	${CC} -c main.c -o main.o

clean:
	rm -rf main.o test