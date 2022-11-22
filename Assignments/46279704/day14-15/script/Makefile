CC = gcc

SRC = src
INC = inc
BIN = bin
OBJ = obj
CFLAGS = -c -g -Wall

prog01: $(BIN)/prog01

$(BIN)/prog01: $(OBJ)/prog01.o
	        $(CC) -o  $(BIN)/prog01 $(OBJ)/prog01.o

$(OBJ)/prog01.o: $(SRC)/prog01.c
	        $(CC) $(CFLAGS) $(SRC)/prog01.c -I $(INC)/



clean:
	        rm -f a.out *.o
		rm -f $(OBJ)/*
	        rm -f $(BIN)/*
