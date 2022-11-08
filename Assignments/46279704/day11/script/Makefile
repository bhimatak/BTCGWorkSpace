CC = gcc

BIN = ./bin
SRC = ./src
INC = ./inc
OBJ = ./obj
CFLAGS = -c -g -Wall

day11: $(BIN)/day11

$(BIN)/day11: $(OBJ)/day11.o
	$(CC) -o $(BIN)/day11 $(OBJ)/day11.o

$(BIN)/day11.o: $(SRC)/day11.c
	$(CC) $(CFLAGS) $(SRC)/day11.c -I $(INC)/


