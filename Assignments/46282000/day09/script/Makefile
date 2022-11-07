SRC=src
OBJ=obj
BIN=bin
INC=inc
CC=gcc
CFLAGS=-c -g -Wall

all: $(BIN)/assign3b



$(BIN)/assign3b : $(OBJ)/assign3b.o
	$(CC) -o $(BIN)/assign3b $(OBJ)/assign3b.o


$(OBJ)/assign3b.o: $(SRC)/assign3b.c
	$(CC) $(CFLAGS) $(SRC)/assign3b.c -I $(INC)/
	mv assign3b.o $(OBJ)/

clean:
	rm -f a.out *.o
	rm -f $(OBJ)/*
	rm -f $(BIN)/*
	@echo "Cleaning Done !"


