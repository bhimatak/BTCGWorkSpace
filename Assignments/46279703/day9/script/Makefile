CC = gcc

SRC = src
INC = inc
BIN = bin
OBJ = obj


all: $(BIN)/app1

$(BIN)/app1: $(OBJ)/arr3b1.o
	          $(CC) -o $(BIN)/app1 $(OBJ)/arr3b1.o

$(OBJ)/arr3b1.o: $(SRC)/arr3b1.c 
	           $(CC) -c $(SRC)/arr3b1.c -I $(INC)/
		   mv arr3b1.o $(OBJ)/

clean: 
	rm -f a.out *.o
	rm -f $(OBJ)/*
	rm -f $(BIN)/*
	@echo "Cleaning Done!"
