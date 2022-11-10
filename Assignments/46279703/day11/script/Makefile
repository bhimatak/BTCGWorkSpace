CC = gcc

SRC = src
INC = inc
BIN = bin
OBJ = obj

all: $(BIN)/app

$(BIN)/app: $(OBJ)/ass3e.o
		$(CC) -o $(BIN)/app $(OBJ)/ass3e.o

$(OBJ)/ass3e.o: $(SRC)/ass3e.c
		    $(CC) -c $(SRC)/ass3e.c -I $(INC)/
	            mv ass3e.o $(OBJ)/

clear:
	rm -f a.out *.o
	rm -f $(OBJ)/*
	rm -f $(BIN)/*i
	@echo "Cleaning Done!"


