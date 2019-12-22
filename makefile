CC=gcc
WALL= -Wall -g
O_ISORT=isort.o
O_TXT=txtfind.o

all: isort txtfind

isort: isort.c isort.h
	$(CC) $(WALL) -c isort.c -o isort

txtfind: txtfind.c txtfind.h
	$(CC) $(WALL) -c txtfind.c -o txtfind

.PHONY: clean all

clean:
	rm -f *.o *.a *.so isort txtfind 