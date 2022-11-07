CC = gcc

SRC = src
INC = inc
BIN = bin
OBJ = obj

all: $(BIN)/assign2c $(BIN)/assign1b

$(BIN)/assign2c: $(OBJ)/assign2c.o
			$(CC) -o $(BIN)/assign2c $(OBJ)/assign2c.o 

$(OBJ)/assign2c.o: $(SRC)/assign2c.c
			$(CC) -c $(SRC)/assign2c.c -I $(INC)/
			mv assign2c.o $(OBJ)/

$(BIN)/assign1b: $(OBJ)/assign1b.o
	                $(CC) -o $(BIN)/assign1b $(OBJ)/assign1b.o

$(OBJ)/assign1b.o: $(SRC)/assign1b.c
	                 $(CC) -c $(SRC)/assign1b.c -I $(INC)/
			 mv assign1b.o $(OBJ)/
