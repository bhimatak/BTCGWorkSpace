CC = gcc

INC = ../inc
SRC = ../src
OBJ = ../obj
BIN = ../bin

CFLAGS = -c -g -Wall

LDFLAGS = -o

IFLAGS = -I $(INC)


all: app1

app1: $(OBJ)/main.o
	$(CC) $(LDFLAGS) $(BIN)/app1 $?

$(OBJ)/main.o: $(SRC)/main.c
	$(CC) $(CFLAGS) $(SRC)/main.c $(IFLAGS)
	mv *.o $(OBJ)/


clean:
	rm -f *.out *.o
	rm -f $(OBJ)/*.o
	rm -f $(BIN)/*
	@echo "Cleaning Done!"

