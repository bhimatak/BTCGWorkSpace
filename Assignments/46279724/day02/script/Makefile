CC = gcc

SRC = src
INC = inc
BIN = bin
OBJ = obj

all: SetUp $(BIN)/a.out
SetUp: 
	mkdir $(OBJ) $(BIN)

$(BIN)/a.out: $(OBJ)/prog2.o
	$(CC) -o $(BIN)/a.out $(OBJ)/prog02.o 

$(OBJ)/prog02.o: $(SRC)/prog02.c
	$(CC) -c $(SRC)/prog02.c -I $(INC)/
	mv prog02.o $(OBJ)/
clean:
	rm -f a.out *.o
	rm -f $(OBJ)/*
	rm -f $(BIN)/*
	@echo "Cleaning Done!"



