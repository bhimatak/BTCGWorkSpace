C = gcc

SRC = src
INC = inc
BIN = bin
OBJ = obj


all: $(BIN)/app1

$(BIN)/app1: $(OBJ)/Assign14.o
	             $(CC) -o $(BIN)/app1 $(OBJ)/Assign14.o

$(OBJ)/Assign14.o: $(SRC)/Assign14.c
			 	    $(CC) -c $(SRC)/Assign14.c -I $(INC)/
				    mv Assign14.o $(OBJ)/

clean:
		rm -f a.out *.o
		rm -f $(OBJ)/*
		rm -f $(BIN)/*
		@echo "Cleaning Done!"
