C = gcc

SRC = src
INC = inc
BIN = bin
OBJ = obj


all: $(BIN)/app1

$(BIN)/app1: $(OBJ)/Ass15.o
	 $(CC) -o $(BIN)/app1 $(OBJ)/Ass15.o

$(OBJ)/Ass15.o: $(SRC)/Ass15.c
	     $(CC) -c $(SRC)/Ass15.c -I $(INC)/
	     mv Ass15.o $(OBJ)/

clean:
	rm -f a.out *.o
	rm -f $(OBJ)/*
	rm -f $(BIN)/*
	@echo "Cleaning Done!"
