C = gcc

SRC = src
INC = inc
BIN = bin
OBJ = obj


all: $(BIN)/app1

$(BIN)/app1: $(OBJ)/day16.o
	         $(CC) -o $(BIN)/app1 $(OBJ)/day16.o

$(OBJ)/day16.o: $(SRC)/day16.c
	             $(CC) -c $(SRC)/day16.c -I $(INC)/
	             mv day16.o $(OBJ)/

clean:
	rm -f a.out *.o
	rm -f $(OBJ)/*
	rm -f $(BIN)/*
	@echo "Cleaning Done!"
