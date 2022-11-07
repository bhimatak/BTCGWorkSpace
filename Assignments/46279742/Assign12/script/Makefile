
CC = gcc

SRC = src
INC = inc
BIN = bin
OBJ = obj

all: $(BIN)/app1

SetUp:
	  mkdir $(OBJ) $(BIN)

$(BIN)/app1: $(OBJ)/12.o
	        $(CC) -o $(BIN)/app1 $(OBJ)/12.o

$(OBJ)/12.o: $(SRC)/12.o
	       $(CC) -c $(SRC)/12.c -I $(INC)/
	       mv 12.o $(OBJ)/

clean:
	rm -f a.out *.o
	rm -f $(OBJ)/*
	rm -f $(BIN)/*
	@echo "Cleaning Done!"
