CC = gcc

SRC = src
INC = inc
BIN = bin
OBJ = obj

all: $(BIN)/app

Setup:	
		mkdir $(OBJ) $(BIN)

$(BIN)/app: $(OBJ)/ass3c.o
		$(CC) -o $(BIN)/app $(OBJ)/ass3c.o

$(OBJ)/ass3c.o: $(SRC)/ass3c.c
		$(CC) -c $(SRC)/ass3c.c -I $(INC)/
	        mv ass3c.o $(OBJ)/

clean: 		
		rm -f  a.out *.o
		rm -f $(OBJ)/*
		rm -f $(BIN)/*
		@echo "Cleaning is done!"
