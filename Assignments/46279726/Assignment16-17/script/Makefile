C = gcc

SRC = src
INC = inc
BIN = bin
OBJ = obj


all: $(BIN)/app1

$(BIN)/app1: $(OBJ)/Assign16-17.o
	    $(CC) -o $(BIN)/app1 $(OBJ)/Assign16-17.o

$(OBJ)/Assign16-17.o: $(SRC)/Assign16-17.c
	 	      $(CC) -c $(SRC)/Assign16-17.c -I $(INC)/
			  mv Assign16-17.o $(OBJ)/

clean:
		rm -f a.out *.o
		rm -f $(OBJ)/*
		rm -f $(BIN)/*
		@echo "Cleaning Done!"
