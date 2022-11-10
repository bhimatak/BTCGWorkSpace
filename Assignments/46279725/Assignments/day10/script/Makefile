CC = gcc
INC = ../inc
SRC = ../src
OBJ = ../obj
BIN = ../bin
CFLAGS = -c -g -Wall
LDFLAGS = -o
IFLAGS = -I $(INC)

test: $(OBJ)/mainnames.o $(OBJ)/names.o
	$(CC) $(LDFLAGS) $(BIN)/test $(OBJ)/mainnames.o $(OBJ)/names.o
$(OBJ)/mainnames.o : $(SRC)/mainnames.c
	$(CC) $(CFLAGS) $(SRC)/mainnames.c $(IFLAGS)
	mv mainnames.o $(OBJ)/
$(OBJ)/names.o : $(SRC)/names.c
	$(CC) $(CFLAGS) $(SRC)/names.c $(IFLAGS)
	mv names.o $(OBJ)/
clean:
	rm -f a.out*.o
	rm -f $(OBJ)/*
	rm -f $(BIN)/*
	@ echo "cleaning is done"

