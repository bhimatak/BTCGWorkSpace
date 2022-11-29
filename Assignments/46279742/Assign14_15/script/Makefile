SRC=src
OBJ=obj
BIN=bin
INC=inc
CC=gcc
CFLAGS=-c -g -Wall

all: $(BIN)/assign5b


$(BIN)/assign5b: $(OBJ)/assign5b.o
	$(CC) -o $(BIN)/assign5b $(OBJ)/assign5b.o

$(OBJ)/assign5b.o: $(SRC)/assign5b.c
	$(CC) $(CFLAGS) $(SRC)/assign5b.c -I $(INC)/
	mv assign5b.o $(OBJ)/

clean:
	rm -f a.out *.o
	rm -f $(OBJ)/*
	rm -f $(BIN)/*
	@echo "Cleaning Done!"