CC=gcc
SRC=src
INC=inc
BIN=bin
OBJ=obj
CFLAGS=-c -g -Wall

day_9= $(BIN)/day_9
$(BIN)/day_9: $(OBJ)/day_9.o
	$(CC) -o $(BIN)/day_9 $(OBJ)/day_9.o

$(OBJ)/day_9.o:$(SRC)/day_9.c
	$(CC) $(CFLAGS) $(SRC)/day_9 -I $(INC)/

clean:
	rm -f a.out *.o
	rm -f $(OBJ)/*
	rm -f $(BIN)/*
	@echo "Cleaning Done!"
