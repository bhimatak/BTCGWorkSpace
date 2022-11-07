CC = gcc

SRC = src
INC = inc
BIN = bin
OBJ = obj
CFLAGS = -c -g -Wall


all: $(BIN)/assign1

$(BIN)/assign1: $(OBJ)/assign1.o
		$(CC) -o $(BIN)/assign1 $(OBJ)/assign1.o 

$(OBJ)/assign1.o: $(SRC)/assign1.c
		$(CC) $(CFLAGS) $(SRC)/assign1.c -I $(INC)/
		mv assign1.o $(OBJ)/

