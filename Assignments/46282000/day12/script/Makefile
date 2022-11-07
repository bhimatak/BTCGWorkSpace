SRC=src
OBJ=obj
BIN=bin
INC=inc
CC=gcc
CFLAGS=-c -g -Wall

all: $(BIN)/assign1

$(BIN)/assign1 : $(OBJ)/assign1.o
	$(CC) -o $(BIN)/assign1 $(OBJ)/assign1.o

$(OBJ)/assign1.o: $(SRC)/assign1.c
	$(CC) $(CFLAGS) $(SRC)/assign1.c -I $(INC)
	mv assign1.o $(OBJ)/

clean:
	rm -f a.out *.o
	rm -f $(OBJ)/*
	rm -f $(BIN)/*
	@echo "Cleaning done !"
