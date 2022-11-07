SRC=src
OBJ=obj
BIN= bin
INC= inc
CC=gcc
CFLAGS=-c -g -Wall

all: $(BIN)/assign5

$(BIN)/assign5 : $(OBJ)/assign5.o
	$(CC) -o $(BIN)/assign5 $(OBJ)/assign5.o

$(OBJ)/assign5.o: $(SRC)/assign5.c
	$(CC) $(CFLAGS) $(SRC)/assign5.c -I $(INC)/
	mv assign5.o $(OBJ)/

clean:
	rm -f a.out *.o
	rm -f $(OBJ)/*
	rm -f $(BIN)/*
	@echo "Cleaning Done !"
