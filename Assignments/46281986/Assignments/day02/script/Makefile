SRC=src
OBJ=obj
BIN=bin
INC=inc
CC=gcc
CFLAGS=-c -g -Wall

all: $(BIN)/prog01 $(BIN)/prog02 $(BIN)/prog03


$(BIN)/prog01: $(OBJ)/prog01.o
	$(CC) -o $(BIN)/prog01 $(OBJ)/prog01.o

$(OBJ)/prog01.o: $(SRC)/prog01.c
	$(CC) $(CFLAGS) $(SRC)/prog01.c -I $(INC)/
	mv prog01.o $(OBJ)/

$(BIN)/prog02: $(OBJ)/prog02.o
	$(CC) -o $(BIN)/prog02 $(OBJ)/prog02.o

$(OBJ)/prog02.o: $(SRC)/prog02.c
	$(CC) $(CFLAGS) $(SRC)/prog02.c -I $(INC)/
	mv prog02.o $(OBJ)/

$(BIN)/prog03: $(OBJ)/prog03.o
	$(CC) -o $(BIN)/prog03 $(OBJ)/prog03.o

$(OBJ)/prog03.o: $(SRC)/prog03.c
	$(CC) $(CFLAGS) $(SRC)/prog03.c -I $(INC)/
	mv prog03.o $(OBJ)/
clean:
	rm -f a.out *.o
	rm -f $(OBJ)/*
	rm -f $(BIN)/*
	@echo "Cleaning Done!"
