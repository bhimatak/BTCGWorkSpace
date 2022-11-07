

CC = gcc

SRC = src
INC = inc
BIN = bin
OBJ = obj

all: $(BIN)/app1

SetUp:
		mkdir $(OBJ) $(BIN)

$(BIN)/app1: $(OBJ)/Pro.o
		$(CC) -o $(BIN)/app1 $(OBJ)/Pro.o 

$(OBJ)/Pro.o: $(SRC)/Pro.c
		$(CC) -c $(SRC)/Pro.c -I $(INC)/
		mv Pro.o $(OBJ)/

clean:
		rm -f a.out *.o
		rm -f $(OBJ)/*
		rm -f $(BIN)/*
		@echo "Cleaning Done!"


