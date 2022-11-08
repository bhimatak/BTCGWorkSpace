CC=gcc
SRC=src
INC=inc
BIN=bin
OBJ=obj
CFLAGS= -c -g -Wall


day103d: $(BIN)/day103d

$(BIN)/day103d: $(OBJ)/day103d.o
	$(CC) -o $(BIN)/day103d $(OBJ)/day103d.o

$(OBJ)/day103d.o: $(SRC)/day103d.c
	$(CC) $(CFLAGS) $(SRC)/day103d.c -I $(INC)/

clean:
	rm -f a.out *.o
	rm -f $(OBJ)/*
	rm -f $(BIN)/*
	@echo "Cleaning Complete"
