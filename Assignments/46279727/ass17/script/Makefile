C = gcc

SRC = src
INC = inc
BIN = bin
OBJ = obj


all: $(BIN)/app1

$(BIN)/app1: $(OBJ)/Ass17.o
	$(CC) -o $(BIN)/app1 $(OBJ)/Ass17.o

$(OBJ)/Ass17.o: $(SRC)/Ass17.c
		$(CC) -c $(SRC)/Ass17.c -I $(INC)/
		mv Ass17.o $(OBJ)/

clean:
	rm -f a.out *.o
	rm -f $(OBJ)/*
	rm -f $(BIN)/*
	@echo "Cleaning Done!"
