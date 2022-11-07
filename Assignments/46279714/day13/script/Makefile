CC = gcc

SRC = src
INC = inc
BIN = bin
OBJ = obj

all: $(BIN)/app1

Setup:
	  mkdir $(OBJ) $(BIN)

$(BIN)/app1: $(OBJ)/assign5.o
	       $(CC) -o $(BIN)/app1 $(OBJ)/assign5.o

$(OBJ)/assign5.o: $(SRC)/assign5.c
		  $(CC) -c $(SRC)/assign5.c -I $(INC)/
	          mv assign5.o $(OBJ)/

clean:
		  rm -f a.out *.o
		  rm -f $(OBJ)/*
		  rm -f $(BIN)/*      
		  @echo "Cleaning is Done!"


