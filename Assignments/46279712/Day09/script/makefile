CC=gcc
SRC=src
INC=inc
BIN=bin
OBJ=obj

all:$(BIN)/day09
$(BIN)/day09: $(OBJ)/day09.o
	$(CC) -o $(BIN)/day09 $(OBJ)/day09.o
$(OBJ)/day09.o:$(SRC)/day09.c
	$(CC) -c $(SRC)/day09.c -I $(INC)/
	mv day09.o $(OBJ)/
clean:
	rm -f a.out *.o
	rm -f $(OBJ)/*
	rm -f $(BIN)/*
	@echo "Cleaning Done!"
