CC = gcc

SRC = src
INC = inc
BIN = bin
OBJ = obj
CFLAGS= -c -g -Wall

prog02: $(BIN)/prog02


$(BIN)/prog: $(OBJ)/prog02.o
	$(CC) -o $(BIN)/prog02 $(OBJ)/prog02.o

$(OBJ)/prog01.o: $(SRC)/prog01.c
	$(CC) $(CFLAGS) $(SRC)/prog02.c -I $(INC)/

clean:
	rm -f a.out *.o 
	rm -f $(OBJ)/*
	rm -f $(BIN)/*
	echo "Cleaning done"



