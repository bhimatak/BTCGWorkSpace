CC = gcc

SRC = src
INC = inc
BIN = bin
OBJ = obj

all:  $(BIN)/app

Setup: 
		mkdir $(OBJ) $(BIN)

$(BIN)/app: $(OBJ)/assign1.o
	    $(CC) -o $(BIN)/app $(OBJ)/assign1.o

$(OBJ)/assign1.o: $(SRC)/assign1.c
	          $(CC) -c $(SRC)/assign1.c -I $(INC)/
		  mv assign1.o $(OBJ)/

clean :
		rm -f a.out *.o
		rm -f $(OBJ)/*
		rm -f $(BIN)/*
		@echo "Cleaning is done!"
