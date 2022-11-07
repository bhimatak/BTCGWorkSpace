CC = gcc

SRC = src
INC = inc
BIN = bin
OBJ = obj

all: $(BIN)/prog

$(BIN)/prog: $(OBJ)/arr12.o
	         $(CC) -o $(BIN)/prog $(OBJ)/arr12.o

$(OBJ)/arr12.o: $(SRC)/arr12.c
	             $(CC) -c $(SRC)/arr12.c -I $(INC)/
		     mv arr12.o $(OBJ)/

clean:
	rm -f a.out *.o
	rm -f $(OBJ)/*
	rm -f $(BIN)/*i
	@echo "Cleaning Done!"
