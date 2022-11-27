C = gcc

SRC = src
INC = inc
BIN = bin
OBJ = obj


all: $(BIN)/app1

$(BIN)/app1: $(OBJ)/day12.o
	         $(CC) -o $(BIN)/app1 $(OBJ)/day12.o

$(OBJ)/day12.o: $(SRC)/day12.c
	             $(CC) -c $(SRC)/day12.c -I $(INC)/
	             mv day12.o $(OBJ)/

clean:
	rm -f a.out *.o
	rm -f $(OBJ)/*
	rm -f $(BIN)/*
	@echo "Cleaning Done!"
