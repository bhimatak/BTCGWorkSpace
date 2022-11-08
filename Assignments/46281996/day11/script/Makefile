CC=gcc
SRC=src
INC=inc
BIN=bin
OBJ=obj
CFLAGS=-c -g -Wall
day11: $(BIN)/day11

$(BIN)/day11: $(OBJ)day11.o
	$(CC) -o $(BIN)/day11 $(OBJ)/day11.o

$(OBJ)/day11.o :$(SRC)/day11.c
	$(CC) $(CFLAGS) $(SRC)/day11.c -I $(INC)/


clean:
	rm -f a.out *.o
	rm -f $(OBJ)/*
	rm -f $(BIN)/*
	@echo "Cleaning Done!"
