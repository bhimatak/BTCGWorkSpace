
CC =  gcc

SRC = src
INC = inc
BIN = bin
OBJ = obj

all: $(BIN)/app1

SetUp:   
	 mkdir $(OBJ) $(BIN)

$(BIN)/app1: $(OBJ)/9b.o
	        $(CC) -o $(BIN)/app1 $(OBJ)/9b.o

$(OBJ)/9b.o: $(SRC)/9b.c
	     $(CC) -c $(SRC)/9b.c -I $(INC)/  
	     mv 9b.o $(OBJ)/
clean:
		rm -f a.out *.o
	        rm -f $(OBJ)/*
		rm -f $(BIN)/*
		@echo "Cleaning Done!"
