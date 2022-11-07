CC=gcc
SRC=src
INC=inc
BIN=bin
OBJ=obj
all:$(BIN)/day10
$(BIN)/day10: $(OBJ)/day10.o
	$(CC) -o $(BIN)/day10 $(OBJ)/day10.o
$(OBJ)/day10.o: $(SRC)/day10.c
	$(CC) -c $(SRC)/day10.c -I $(INC)/
	mv day10.o $(OBJ)/
clean:
	rm -f a.out *.o
	rm -f $(OBJ)/*
	rm -f $(BIN)/*
	@echo "Cleaning Done!"
