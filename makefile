CC=gcc
WALL= -Wall -g
O_ISORT=isort.o
O_TXT=txtfind.o

all: isort txtfind

isort: isort.c
	$(CC) $(WALL) isort.c -o isort

txtfind: txtfind.c
	$(CC) $(WALL) txtfind.c -o txtfind

.PHONY: clean all

clean:
	rm -f *.o *.a *.so isort txtfind 