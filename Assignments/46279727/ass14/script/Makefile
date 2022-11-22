C = gcc

SRC = src
INC = inc
BIN = bin
OBJ = obj


all: $(BIN)/app1

$(BIN)/app1: $(OBJ)/Ass14.o
	  $(CC) -o $(BIN)/app1 $(OBJ)/Ass14.o

$(OBJ)/Ass14.o: $(SRC)/Ass14.c
	  $(CC) -c $(SRC)/Ass14.c -I $(INC)/
	  mv Ass14.o $(OBJ)/

clean:
	rm -f a.out *.o
	rm -f $(OBJ)/*
	rm -f $(BIN)/*
	@echo "Cleaning Done!"

