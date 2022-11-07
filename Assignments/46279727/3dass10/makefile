
CC = gcc

SRC = src
INC = inc
BIN = bin
OBJ = obj

all: $(BIN)/app1

Setup:
             
                mkdir $(OBJ) $(BIN)
	
$(BIN)/app1: $(OBJ)/Prog.o
	        $(CC) -o $(BIN)/app1 $(OBJ)/Prog.o

$(OBJ)/Prog.o: $(SRC)/Prog.c
	        $(CC) -c $(SRC)/Prog.c -I $(INC)/
		mv Prog.o $(OBJ)/
clean:          
	        rm -f a.out *.o
		rm -f $(OBJ)/*
		rm -f $(BIN)/*
		@echo "Cleaning Donel"


