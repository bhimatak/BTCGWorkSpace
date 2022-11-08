CC = gcc

SRC = src
INC = inc
BIN = bin
OBJ = obj


all: $(BIN)/array
	
$(BIN)/array: $(OBJ)/array.o
	$(CC) -o $(BIN)/array $(OBJ)array.o

$(OBJ)/array: $(SRC)/array.c
	$(CC) -c $(SRC)/array.c -I $(INC)/


clean:
	rm -f a.out *.o
	rm -f $(OBJ)/*
	rm -f $(BIN)/*
	@echo "Cleaning done!"

