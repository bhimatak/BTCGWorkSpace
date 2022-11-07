SRC=src
OBJ=obj
BIN=bin
INC=inc
CC=gcc
CFLAGS=-c -g -Wall

all: $(BIN)/Assign2b


$(BIN)/Assign2b: $(OBJ)/Assign2b.o
	$(CC) -o $(BIN)/Assign2b $(OBJ)/Assign2b.o

$(OBJ)/Assign2b.o: $(SRC)/Assign2b.c
	$(CC) $(CFLAGS) $(SRC)/Assign2b.c -I $(INC)/
	mv Assign2b.o $(OBJ)/

clean:
	rm -f a.out *.o
	rm -f $(OBJ)/*
	rm -f $(BIN)/*
	@echo "Cleaning Done!"
