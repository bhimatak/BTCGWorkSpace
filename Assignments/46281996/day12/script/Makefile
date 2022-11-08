CC=gcc
SRC=src
INC=inc
BIN=bin
OBJ=obj
CFLAGS= -c -g -Wall

day12:$(BIN)/day12

$(BIN)/day12:$(OBJ)/day12.o
	$(CC) -o $(BIN)/day12 $(OBJ)/day12.o

$(OBJ)/day12.o:$(SRC)/day12.c
	$(CC) $(CFLAGS) $(SRC)/day12.c -I $(INC)/


clean:
	rm -f a.out *.o
	rm -f $(OBJ)/*
	rm -f $(BIN)/*
	@echo "Cleaning done!"
	
