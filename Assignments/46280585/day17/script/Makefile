C = gcc

SRC = src
INC = inc
BIN = bin
OBJ = obj


all: $(BIN)/app1

$(BIN)/app1: $(OBJ)/day17.o
	         $(CC) -o $(BIN)/app1 $(OBJ)/day17.o

$(OBJ)/day17.o: $(SRC)/day17.c
	             $(CC) -c $(SRC)/day17.c -I $(INC)/
	             mv day17.o $(OBJ)/

clean:
	rm -f a.out *.o
	rm -f $(OBJ)/*
	rm -f $(BIN)/*
	@echo "Cleaning Done!"
