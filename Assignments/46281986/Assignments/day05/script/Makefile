SRC = src
OBJ = obj
BIN = bin
INC = inc
CC = gcc
CFLAGS = -c -g -Wall

all: $(BIN)/assign01 $(BIN)/assign_2b_v02

$(BIN)/assign01:$(OBJ)/assign01.o
	$(CC) -o $(BIN)/assign01 $(OBJ)/assign01.o

$(OBJ)/assign01.o:$(SRC)/assign01.c
	$(CC) $(CFLAGS) $(SRC)/assign01.c -I $(INC)/
	mv assign01.o $(OBJ)/

$(BIN)/assign_2b_v02:$(OBJ)/assign_2b_v02
	$(CC) -o $(BIN)/assign_2b_v02 $(OBJ)/assign_2b_v02.o

$(OBJ)/assign_2b_v02.o:$(SRC)/assign_2b_v02.c
	$(CC) $(CFLAGS) $(SRC)/assign_2b_v02.c -I $(INC)/
	mv assign_2b_v02.o $(OBJ)/
clean:
	rm -f a.out *.o
	rm -f $(OBJ)/*
	rm -f $(BIN)/*
	@echo "Cleaning Done!"

