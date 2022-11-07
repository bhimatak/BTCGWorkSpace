SRC = src
OBJ = obj
BIN = bin
INC = inc
CC = gcc
CFLAGS = -c -g -Wall

all: $(BIN)/assign3c $(BIN)/assign3d

$(BIN)/assign3c:$(OBJ)/assign3c.o
	$(CC) -o $(BIN)/assign3c $(OBJ)/assign3c.o

$(OBJ)/assign3c.o:$(SRC)/assign3c.c
	$(CC) $(CFLAGS) $(SRC)/assign3c.c -I $(INC)/
	mv assign3c.o $(OBJ)/

$(BIN)/assign3d:$(OBJ)/assign3d.o
	$(CC) -o $(BIN)/assign3d $(OBJ)/assign3d.o

$(OBJ)/assign3d.o:$(SRC)/assign3d.c
	$(CC) $(CFLAGS) $(SRC)/assign3d.c -I $(INC)/
	mv assign3d.o $(OBJ)/
clean:
	rm -f a.out *.o
	rm -f $(OBJ)/*
	rm -f $(BIN)/*
	@echo "Cleaning Done!"
