C = gcc

SRC = src
INC = inc
BIN = bin
OBJ = obj


all: $(BIN)/app1

$(BIN)/app1: $(OBJ)/Assign18-19.o
	             $(CC) -o $(BIN)/app1 $(OBJ)/Assign18-19.o

$(OBJ)/Assign18-19.o: $(SRC)/Assign18-19.c
	 	      $(CC) -c $(SRC)/Assign18-19.c -I $(INC)/
			  mv Assign18-19.o $(OBJ)/

clean:
		rm -f a.out *.o
		rm -f $(OBJ)/*
		rm -f $(BIN)/*
		@echo "Cleaning Done!"
