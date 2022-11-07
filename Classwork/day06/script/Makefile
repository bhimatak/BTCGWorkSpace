CC = gcc

INC = ../inc
SRC = ../src
OBJ = ../obj
BIN = ../bin

CFLAGS = -c -g -Wall

LDFLAGS = -o

IFLAGS = -I $(INC)


all: app1 app2

app1: $(OBJ)/main1.o
	$(CC) $(LDFLAGS) $(BIN)/app1 $?

app2: $(OBJ)/main2.o
	$(CC) $(LDFLAGS) $(BIN)/app2 $?

$(OBJ)/main1.o: $(SRC)/main1.c
	$(CC) $(CFLAGS) $(SRC)/main1.c $(IFLAGS)
	mv *.o $(OBJ)/

$(OBJ)/main2.o: $(SRC)/main2.c
	$(CC) $(CFLAGS) $(SRC)/main2.c $(IFLAGS)
	mv *.o $(OBJ)/



clean:
	rm -f *.out *.o
	rm -f $(OBJ)/*.o
	rm -f $(BIN)/*
	@echo "Cleaning Done!"

