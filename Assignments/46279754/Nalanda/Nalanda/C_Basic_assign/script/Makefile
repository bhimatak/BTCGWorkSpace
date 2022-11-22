CC = gcc
SRC = src
INC = inc
BIN = bin
OBJ = obj
CFLAGS = -c -g -Wall

all: $(BIN)/3e $(BIN)/day07_2b $(BIN)/day16_17 

$(BIN)/3e: $(OBJ)/3e.o
			$(CC) -o $(BIN)/3e $(OBJ)/3e.o 

$(OBJ)/3e.o: $(SRC)/3e.c
			$(CC) $(CFLAGS) $(SRC)/3e.c -I $(INC)/
			mv 3e.o $(OBJ)/


$(BIN)/day07_2b: $(OBJ)/day07_2b.o
			$(CC) -o $(BIN)/day07_2b $(OBJ)/day07_2b.o 

$(OBJ)/day07_2b.o: $(SRC)/day07_2b.c
			$(CC) $(CFLAGS) $(SRC)/day07_2b.c -I $(INC)/
			mv day07_2b.o $(OBJ)/


$(BIN)/day16_17: $(OBJ)/day16_17.o
			$(CC) -o $(BIN)/day16_17 $(OBJ)/day16_17.o 

$(OBJ)/day16_17.o: $(SRC)/day16_17.c
			$(CC) $(CFLAGS) $(SRC)/day16_17.c -I $(INC)/
			mv day16_17.o $(OBJ)/

$(BIN)/day14_15_5b: $(OBJ)/day14_15_5b.o
			$(CC) -o $(BIN)/day14_15_5b $(OBJ)/day14_15_5b.o 

$(OBJ)/day14_15_5b.o: $(SRC)/day14_15_5b.c
			$(CC) $(CFLAGS) $(SRC)/day14_15_5b.c -I $(INC)/
			mv day14_15_5b.o $(OBJ)/
clean: 
	rm -f a.out *.o
	rm -f $(BIN)/*
	rm -f $(OBJ)/*

