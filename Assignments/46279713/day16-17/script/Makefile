CC=gcc
SRC=src
INC=inc
BIN=bin
OBJ=obj
CFLAGS= -c -g -Wall

$(BIN)/assign4: $(OBJ)/assign4.o
			$(CC) -o $(BIN)/assign4 $(OBJ)/assign4.o
$(OBJ)/assign4.o: $(SRC)/assign5b.c	
		$(CC) $(CFLAGS) $(SRC)/assign5b.c -I $(INC)/
		mv assign4.o $(OBJ)/

clean:
rm -f a.out *.o
rm -f $(OBJ)/*
rm -f $(BIN)/*
@echo "Cleaning Done!"
