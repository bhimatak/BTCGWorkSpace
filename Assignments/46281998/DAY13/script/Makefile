SRC=src
OBJ=obj
BIN=bin
INC=inc
CC=gcc
CFLAGS=-c -g -Wall
all: $(BIN)/assign-5

$(BIN)/assign-5: $(OBJ)/assign-5.o
	$(CC) -o $(BIN)/assign-5 $(OBJ)/assign-5.o

$(OBJ)/assign-5.o: $(SRC)/assign-5.c
	$(CC) $(CFLAGS) $(SRC)/assign-5.c -I $(INC)/
	mv assign-5.o $(OBJ)/

clean:
	rm -f a.out *.o
	rm -f $(OBJ)/*
	rm -f $(BIN)/*
	@echo "Cleaning Done!"
