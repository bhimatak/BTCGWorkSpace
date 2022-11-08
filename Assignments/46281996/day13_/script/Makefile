CC=gcc
SRC=src
INC=inc
BIN=bin
OBJ=obj
CFLAGS= -c -g -Wall

day13_:$(BIN)/day13_

$(BIN)/day13_:$(OBJ)/day13_.o
	                $(CC) -o $(BIN)/day13_ $(OBJ)/day13_.o

$(OBJ)/day13_.o:$(SRC)/day13_
	                $(CC) $(CFLAGS) $(SRC)/day13_.c -I $(INC)/


clean:
	        rm -f a.out *.o
			rm -f $(OBJ)/*
			rm -f $(BIN)/*
			@echo "Cleaning done!"
