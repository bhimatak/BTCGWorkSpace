C = gcc

SRC = src
INC = inc
BIN = bin
OBJ = obj


all: $(BIN)/app1

$(BIN)/app1: $(OBJ)/day15.o
	         $(CC) -o $(BIN)/app1 $(OBJ)/day15.o

$(OBJ)/day15.o: $(SRC)/day15.c
	             $(CC) -c $(SRC)/day15.c -I $(INC)/
	             mv day15.o $(OBJ)/

clean:
	rm -f a.out *.o
	rm -f $(OBJ)/*
	rm -f $(BIN)/*
	@echo "Cleaning Done!"
