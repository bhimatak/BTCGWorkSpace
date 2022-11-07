C = gcc

SRC = src
INC = inc
BIN = bin
OBJ = obj
CFLAGS = -c -g -Wall


all: $(BIN)/assign3c

$(BIN)/assign3c: $(OBJ)/assign3c.o
		$(CC) -o $(BIN)/assign3c $(OBJ)/assign3c.o 

$(OBJ)/assign3c.o: $(SRC)/assign3c.c
		$(CC) $(CFLAGS) $(SRC)/assign3c.c -I $(INC)/
		mv assign3c.o $(OBJ)/

clean:
	rm -f a.out *.o
	rm -f $(OBJ)/*
	rm -f $(BIN)/*
	@echo "Cleaning Done!"
