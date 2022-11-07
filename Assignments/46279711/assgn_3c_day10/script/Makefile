CC = gcc

SRC = src
INC = inc
BIN = bin
OBJ = obj

all: $(BIN)/app1

SetUp:
		mkdir $(OBJ) $(BIN)

$(BIN)/app1: $(OBJ)/pro1.o
		$(CC) -o $(BIN)/app1 $(OBJ)/pro1.o 

$(OBJ)/pro1.o: $(SRC)/pro1.c
		$(CC) -c $(SRC)/pro1.c -I $(INC)/
		mv pro1.o $(OBJ)/

clean:
		rm -f a.out *.o
		rm -f $(OBJ)/*
		rm -f $(BIN)/*
		@echo "Cleaning Done!"


