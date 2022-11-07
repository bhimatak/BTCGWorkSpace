CC = gcc
SRC = src
INC = inc
BIN = bin
OBJ = obj
CFLAGS = -c -g -Wall

all: $(BIN)/3e 

$(BIN)/3e: $(OBJ)/3e.o
			$(CC) -o $(BIN)/3e $(OBJ)/3e.o 

$(OBJ)/3e.o: $(SRC)/3e.c
			$(CC) $(CFLAGS) $(SRC)/3e.c -I $(INC)/
					mv 3e.o $(OBJ)/

clean: 
	rm -f a.out *.o
	rm -f $(BIN)/*
	rm -f $(OBJ)/*

