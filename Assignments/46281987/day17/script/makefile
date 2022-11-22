CC = gcc

SRC = src
INC = inc
BIN = bin
OBJ = obj
CFLAGS = -c -g -Wall


all: $(BIN)/qSort

$(BIN)/qSort: $(OBJ)/qSort.o
				$(CC) -o $(BIN)/qSort $(OBJ)/qSort.o 

$(OBJ)/qSort.o: $(SRC)/qSort.c
				$(CC) $(CFLAGS) $(SRC)/qSort.c -I $(INC)/
				mv qSort.o $(OBJ)/

clean:
		rm -f *.out *.o
		rm -f $(OBJ)/*.o
		rm -f $(BIN)/*
		@echo "Cleaning Done!"

