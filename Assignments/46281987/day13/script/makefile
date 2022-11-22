CC = gcc

SRC = src
INC = inc
BIN = bin
OBJ = obj
CFLAGS = -c -g -Wall


all: $(BIN)/assign5

$(BIN)/assign5: $(OBJ)/assign5.o
			$(CC) -o $(BIN)/assign5 $(OBJ)/assign5.o 

$(OBJ)/assign5.o: $(SRC)/assign5.c
			$(CC) $(CFLAGS) $(SRC)/assign5.c -I $(INC)/
			mv assign5.o $(OBJ)/

clean:
		rm -f *.out *.o
		rm -f $(OBJ)/*.o
		rm -f $(BIN)/*
		@echo "Cleaning Done!"
