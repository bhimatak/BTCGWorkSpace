C = gcc

SRC = src
INC = inc
BIN = bin
OBJ = obj


all: $(BIN)/app1

$(BIN)/app1: $(OBJ)/ass.o
	         $(CC) -o $(BIN)/app1 $(OBJ)/ass.o

$(OBJ)/ass.o: $(SRC)/ass.c
	             $(CC) -c $(SRC)/ass.c -I $(INC)/
	             mv ass.o $(OBJ)/

clean:
	rm -f a.out *.o
	rm -f $(OBJ)/*
	rm -f $(BIN)/*
	@echo "Cleaning Done!"
