CC=gcc
AS=ld
LD=ld
CLAG=-g -c
LIBP=/usr/lib

client:client.c
	$(CC) $(CLAG) client.c 
	$(LD) -o client client.o -L $(LIBP)  -lc 

server:server.c
	$(CC) $(CLAG) server.c
	$(LD) -o server server.o -L $(LIBP) -lc
