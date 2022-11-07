
CC = gcc

SRC = src
INC = inc
BIN = bin
OBJ = obj

all: $(BIN)/app1 $(BIN)/app2

SetUp:
		mkdir $(OBJ) $(BIN)

$(BIN)/app1: $(OBJ)/Prog.o
		$(CC) -o $(BIN)/app1 $(OBJ)/Prog.o 

$(OBJ)/Prog.o: $(SRC)/Prog.c
		$(CC) -c $(SRC)/Prog.c -I $(INC)/
		mv Prog.o $(OBJ)/

$(BIN)/app2: $(OBJ)/P.o
		$(CC) -o $(BIN)/app2 $(OBJ)/P.o 

$(OBJ)/P.o: $(SRC)/P.c
		$(CC) -c $(SRC)/P.c -I $(INC)/
		mv P.o $(OBJ)/
clean:
		rm -f a.out *.o
		rm -f $(OBJ)/*
		rm -f $(BIN)/*
		@echo "Cleaning Done!"


