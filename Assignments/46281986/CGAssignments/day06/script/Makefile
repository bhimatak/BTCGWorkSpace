SRC = src
OBJ = obj
BIN = bin
INC = inc
CC = gcc
CFLAGS = -c -g -Wall

all: $(BIN)/assign1b $(BIN)/assign2c

$(BIN)/assign1b: $(OBJ)/assign1b.o
	$(CC) -o $(BIN)/assign1b $(OBJ)/assign1b.o

$(OBJ)/assign1b.o: $(SRC)/assign1b.c
	$(CC) $(CFLAGS) $(SRC)/assign1b.c -I $(INC)/
	mv assign1b.o $(OBJ)/

$(BIN)/assign2c: $(OBJ)/assign2c.o
	$(CC) -o $(BIN)/assign2c $(OBJ)/assign2c.o

$(OBJ)/assign2c.o: $(SRC)/assign2c.c
	$(CC) $(CFLAGS) $(SRC)/assign2c.c -I $(INC)/
	mv assign2c.o $(OBJ)/

clean:
	rm -f a.out *.o
	rm -f $(OBJ)/*
	rm -f $(BIN)/*
	@echo "Cleaning Done!"
