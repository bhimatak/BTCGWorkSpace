CC = gcc

SRC = src
INC = inc
BIN = bin
OBJ = obj

all: $(BIN)/app1

SetUp:
		  mkdir $(OBJ) $(BIN)

$(BIN)/app1: $(OBJ)/13.o
	        $(CC) -o $(BIN)/app1 $(OBJ)/13.o

$(OBJ)/13.o: $(SRC)/13.o
		       $(CC) -c $(SRC)/13.c -I $(INC)/
		       mv 13.o $(OBJ)/
clean:
		rm -f a.out *.o
	        rm -f $(OBJ)/*
		rm -f $(BIN)/*
		@echo "Cleaning Done!"

