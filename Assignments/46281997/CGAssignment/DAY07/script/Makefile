SRC=src
OBJ=obj
BIN=bin
INC=inc
CC=gcc
CFLAGS=-c -g -Wall

all: $(BIN)/assign2b


$(BIN)/assign2b: $(OBJ)/assign2b.o
	$(CC) -o $(BIN)/assign2b $(OBJ)/assign2b.o

$(OBJ)/assign2b.o: $(SRC)/assign2b.c
	$(CC) $(CFLAGS) $(SRC)/assign2b.c -I $(INC)/
	mv assign2b.o $(OBJ)/

clean:
	rm -f a.out *.o
	rm -f $(OBJ)/*
	rm -f $(BIN)/*
	@echo "Cleaning Done!"


