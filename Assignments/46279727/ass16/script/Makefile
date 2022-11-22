C = gcc

SRC = src
INC = inc
BIN = bin
OBJ = obj


all: $(BIN)/app1

$(BIN)/app1: $(OBJ)/Ass16.o
	 $(CC) -o $(BIN)/app1 $(OBJ)/Ass16.o

$(OBJ)/Ass16.o: $(SRC)/Ass16.c
	      $(CC) -c $(SRC)/Ass16.c -I $(INC)/
	      mv Ass16.o $(OBJ)/

clean:
	rm -f a.out *.o
	rm -f $(OBJ)/*
	rm -f $(BIN)/*
	@echo "Cleaning Done!"
