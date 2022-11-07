CC = gcc

SRC = src
INC = inc
BIN = bin
OBJ = obj

all: $(BIN)/app

$(BIN)/app: $(OBJ)/ass5.o
	         $(CC) -o $(BIN)/app $(OBJ)/ass5.o

$(OBJ)/ass5.o: $(SRC)/ass5.c
	            $(CC) -c $(SRC)/ass5.c -I $(INC)/
	            mv ass5.o $(OBJ)/

clean:
	rm -f a.out *.o
	rm -f $(OBJ)/*
	rm -f $(BIN)/*i
	@echo "Cleaning Done!"
