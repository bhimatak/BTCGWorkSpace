CC = gcc

SRC = src
INC = inc
BIN = bin
OBJ = obj

all: SetUp $(BIN)/app1

SetUp:
		mkdir $(OBJ) $(BIN)

$(BIN)/app1: $(OBJ)/prog01.o
		$(CC) -o $(BIN)/app1 $(OBJ)/prog01.o 

$(OBJ)/prog01.o: $(SRC)/prog01.c
		$(CC) -c $(SRC)/prog01.c -I $(INC)/
		mv prog01.o $(OBJ)/

clean:
		rm -f a.out *.o
		rm -f $(OBJ)/*
		rm -f $(BIN)/*
		@echo "Cleaning Done!"


