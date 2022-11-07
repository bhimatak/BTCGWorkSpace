SRC=src
OBJ=obj
BIN=bin
INC=inc
CC=gcc
CFLAGS=-c -g -Wall

all: $(BIN)/assignment1 $(BIN)/assignment2

$(BIN)/assignment1: $(OBJ)/assignment1.o
	$(CC) -o $(BIN)/assignment1 $(OBJ)/assignment1.o

$(OBJ)/assignment1.o: $(SRC)/assignment1.c
	$(CC) $(CFLAGS) $(SRC)/assignment1.c -I $(INC)/
	mv assignment1.o $(OBJ)/

$(BIN)/assignment2 : $(OBJ)/assignment2.o
	$(CC) -o $(BIN)/assignment2 $(OBJ)/assignment2.o

$(OBJ)/assignment2.o: $(SRC)/assignment2.c
	$(CC) $(CFLAGS) $(SRC)/assignment2.c -I $(INC)/
	mv assignment2.o $(OBJ)/

clean:
	rm -f a.out *.o
	rm -f $(OBJ)/*
	rm -f $(BIN)/*
	@echo "Cleaning Done!"



