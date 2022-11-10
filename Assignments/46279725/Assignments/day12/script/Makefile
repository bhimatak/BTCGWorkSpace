CC = gcc
INC = ../inc
SRC = ../src
OBJ = ../obj
BIN = ../bin
CFLAGS = -c -g -Wall
LDFLAGS = -o
IFLAGS = -I $(INC)

test: $(OBJ)/mainArray.o $(OBJ)/display.o
	$(CC) $(LDFLAGS) $(BIN)/test $(OBJ)/mainArray.o $(OBJ)/display.o
$(OBJ)/mainArray.o : $(SRC)/mainArray.c
	$(CC) $(CFLAGS) $(SRC)/mainArray.c $(IFLAGS)
	mv mainArray.o $(OBJ)/
$(OBJ)/display.o : $(SRC)/display.c
	$(CC) $(CFLAGS) $(SRC)/displayy.c $(IFLAGS)
	mv display.o $(OBJ)/
clean:
	rm -f a.out*.o
	rm -f $(OBJ)/*
	rm -f $(BIN)/*
	@ echo "cleaning is done"

