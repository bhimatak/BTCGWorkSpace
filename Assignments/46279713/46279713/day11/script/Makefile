CC= gcc
SRC=src
INC=inc
BIN=bin
OBJ=obj

all: $(BIN)/app1

$(BIN)/app1: $(OBJ)/assign3e.o
	$(CC) -o $(BIN)/app1 $(OBJ)/assign3e.o 

$(OBJ)/assign3e.o: $(SRC)/assign3e.c
	$(CC) -c $(SRC)/assign3e.c -I $(INC)/
	mv assign3e.o $(OBJ)/

clean:
	rm -f a.out *.o
	rm -f $(OBJ)/*
	rm -f $(BIN)/*
	@echo "Cleaning Done!"


