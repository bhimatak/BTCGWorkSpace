SRC=src
OBJ=obj
BIN=bin
INC=inc
CC=gcc
CFLAGS=-c -g -Wall

all: $(BIN)/assign3e

$(BIN)/assign3e : $(OBJ)/assign3e.o
	$(CC) -o $(BIN)/assign3e $(OBJ)/assign3e.o

$(OBJ)/assign3e.o: $(SRC)/assign3e.c
	$(CC) $(CFLAGS) $(SRC)/assign3e.c -I $(INC)/
	mv assign3e.o $(OBJ)/

clean:
	rm -f a.out *.o
	rm -f $(OBJ)/*
	rm -f $(BIN)/*
	@echo "Cleaning Done !"
