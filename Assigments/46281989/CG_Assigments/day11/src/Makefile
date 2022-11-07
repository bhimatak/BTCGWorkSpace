SRC=src
OBJ=obj
BIN=bin
INC=inc
CC=gcc
CFLAGS=-c -g -wall

all: $(BIN)/assign11

$(BIN)/assign11c : $(OBJ)/assign11c.o
	$(CC) -o $(BIN)/assign11 $(OBJ)/assign.o

$(OBJ)/assign11c.o: $(SRC)/assign11.c
	$(CC) $(CFLAGS) $(SRC)/assign11.c -I $(INC)/
	mv assign11.o $(OBC)/

clean:
	rm -f a.out *.o
	rm -f $(OBJ)/*
	rm -f $(BIN)/*
	@echo "Cleaning Done!"
