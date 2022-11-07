CC = gcc

SRC = src
INC = inc
BIN = bin
OBJ = obj
CFLAGS = -c -g -Wall


all: $(BIN)/assign2b

$(BIN)/assign2b: $(OBJ)/assign2b.o
		$(CC) -o $(BIN)/assign2b $(OBJ)/assign2b.o 

$(OBJ)/assign2b.o: $(SRC)/assign2b.c
		$(CC) $(CFLAGS) $(SRC)/assign2b.c -I $(INC)/
		mv assign2b.o $(OBJ)/

