SRC=src
OBJ=obj
BIN=bin
INC=inc
CC=gcc
CFLAGS=-c -g -Wall

all: $(BIN)/aggign3b

$(BIN)/aggign3b : $(OBJ)/aggign3b.o
	$(CC) -o $(BIN)/aggign3b $(OBJ)/aggign3b.o

$(OBJ)/aggign3b.o: $(SRC)/aggign3b.c
	$(CC) $(CFLAGS) $(SRC)/aggign3b.c -I $(INC)/
	mv aggign3b.o $(OBJ)/

clean: 
	rm -f a.out *.o
	rm -f $(OBJ)/*
	rm -f $(BIN)/*
	@echo ":Cleaning Done!"
