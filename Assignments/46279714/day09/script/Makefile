CC = gcc

SRC = src
INC = inc
BIN = bin
OBJ = obj

all: $(BIN)/app1

Setup: 
	  mkdir $(OBJ) $(BIN)

$(BIN)/app1: $(OBJ)/assign3b.o
	     $(CC) -o $(BIN)/app1 $(OBJ)/assign3b.o

$(OBJ)/assign3b.o: $(SRC)/assign3b.c
	           $(CC) -c $(SRC)/assign3b.c -I $(INC)/
		   mv assign3b.o $(OBJ)/

clean :
	  rm -f a.out *.o
	  rm -f $(OBJ)?*
	  rm -f $(BIN)/*
	  @echo "Cleaning id Done!"
