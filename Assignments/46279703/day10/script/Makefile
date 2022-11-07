C = gcc

SRC = src
INC = inc
BIN = bin
OBJ = obj

all: $(BIN)/prog

$(BIN)/prog: $(OBJ)/arr3c.o
	          $(CC) -o $(BIN)/prog $(OBJ)/arr3c.o

$(OBJ)/arr3c.o: $(SRC)/arr3c.c
	           $(CC) -c $(SRC)/arr3c.c -I $(INC)/
	           mv arr3c.o $(OBJ)/

clean:
	rm -f a.out *.o
	rm -f $(OBJ)/*
	rm -f $(BIN)/*
	@echo "Cleaning Done!!"
