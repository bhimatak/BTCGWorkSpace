CC=gcc
SRC=src
INC=inc
BIN=bin
OBJ=obj
CFLAGS= -c -g -Wall
all: $(BIN)/day113e  $(BIN)/assign5

$(BIN)/day113e: $(OBJ)/day113e.o
			$(CC) -o $(BIN)/day113e $(OBJ)/day113e.o

$(OBJ)/day113e.o: $(SRC)/day113e.c
			$(CC) $(CFLAGS) $(SRC)/day113e.c -I $(INC)/
					mv day113e.o $(OBJ)/

$(BIN)/assign5: $(OBJ)/assign5.o
			 $(CC) -o $(BIN)/assign5 $(OBJ)/assign5.o

$(OBJ)/assign5.o: $(SRC)/assign5.c
			$(CC) $(CFLAGS) $(SRC)/assign5.c -I $(INC)/
					 mv assign5.o $(OBJ)/

clean:
				rm -f a.out *.o
				rm -f $(OBJ)/*
				rm -f $(BIN)/*
				@echo "Cleaning Done!"
