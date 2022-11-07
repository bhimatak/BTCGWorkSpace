CC = gcc

SRC = src
INC = inc
BIN = bin
OBJ = obj

all: $(BIN)/prog

$(BIN)/prog: $(OBJ)/arr3d.o
	          $(CC) -o $(BIN)/prog $(OBJ)/arr3d.o

$(OBJ)/arr3d.o: $(SRC)/arr3d.c
	           $(CC) -c $(SRC)/arr3d.c -I $(INC)/
	           mv arr3d.o $(OBJ)/

clean:
	rm -f a.out *.o
	rm -f $(OBJ)/*
	rm -f $(BIN)/*
	@echo "Cleaning Done!"
                                                                                                                       
