SRC=../src
OBJ=../obj
BIN=../bin
INC=../inc
CC=gcc
CFLAGS=-c -g -Wall

all: $(BIN)/assign


$(BIN)/assign: $(OBJ)/assign.o
	$(CC) -o $(BIN)/assign $(OBJ)/assign.o

$(OBJ)/assign.o: $(SRC)/assign.c
	$(CC) $(CFLAGS) $(SRC)/assign.c -I $(INC)/
	mv assign.o $(OBJ)/

clean:
	rm -f a.out *.o
	rm -f $(OBJ)/*
	rm -f $(BIN)/*
	@echo "Cleaning Done!"


