CC = gcc

SRC = src
INC = inc
BIN = bin
OBJ = obj

all: $(BIN)/prog01 $(BIN)/prog02 $(BIN)/prog03 $(BIN)/prog04 $(BIN)/prog05

$(BIN)/prog01: $(OBJ)/prog01.o
		$(CC) -o $(BIN)/prog01 $(OBJ)/prog01.o 

$(OBJ)/prog01.o: $(SRC)/prog01.c
		$(CC) -c $(SRC)/prog01.c -I $(INC)/
		mv prog01.o $(OBJ)/

$(BIN)/prog02: $(OBJ)/prog02.o
		$(CC) -o $(BIN)/prog02 $(OBJ)/prog02.o 

$(OBJ)/prog02.o: $(SRC)/prog02.c
		$(CC) -c $(SRC)/prog02.c -I $(INC)/
		mv prog02.o $(OBJ)/

$(BIN)/prog03: $(OBJ)/prog03.o
		$(CC) -o $(BIN)/prog03 $(OBJ)/prog03.o 

$(OBJ)/prog03.o: $(SRC)/prog03.c
		$(CC) -c $(SRC)/prog03.c -I $(INC)/
		mv prog03.o $(OBJ)/

$(BIN)/prog04: $(OBJ)/prog04.o
		$(CC) -o $(BIN)/prog04 $(OBJ)/prog04.o 

$(OBJ)/prog04.o: $(SRC)/prog04.c
		$(CC) -c $(SRC)/prog04.c -I $(INC)/
		mv prog04.o $(OBJ)/


$(BIN)/prog05: $(OBJ)/prog05.o
		$(CC) -o $(BIN)/prog05 $(OBJ)/prog05.o 

$(OBJ)/prog05.o: $(SRC)/prog05.c
		$(CC) -c $(SRC)/prog05.c -I $(INC)/
		mv prog05.o $(OBJ)/


clean:
		rm -f a.out *.o
		rm -f $(OBJ)/*
		rm -f $(BIN)/*
		@echo "Cleaning Done!"
