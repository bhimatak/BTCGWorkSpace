SRC=src
OBJ=obj
BIN=bin
INC=inc
CC=gcc
CFLAGS=-c -g -Wall

all: $(BIN)/assign-1


$(BIN)/assign-1: $(OBJ)/assign-1.o
	        $(CC) -o $(BIN)/assign-1 $(OBJ)/assign-1.o

$(OBJ)/assign-1.o: $(SRC)/assign-1.c
	        $(CC) $(CFLAGS) $(SRC)/assign-1.c -I $(INC)/
		        mv assign-1.o $(OBJ)/

clean:
	        rm -f a.out *.o
		        rm -f $(OBJ)/*
			        rm -f $(BIN)/*
				        @echo "Cleaning Done!"
