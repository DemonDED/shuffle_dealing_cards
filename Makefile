CC=gcc
CFLAGS=-Wall -Werror -Wextra
CFLAGS_DEB=$(CFLAGS) -g

make: main.c
	$(CC) main.c $(CFLGAS) -o main.bin

debug: main.c
	$(CC) main.c $(CFLAGS_DEB) -o main.bin
