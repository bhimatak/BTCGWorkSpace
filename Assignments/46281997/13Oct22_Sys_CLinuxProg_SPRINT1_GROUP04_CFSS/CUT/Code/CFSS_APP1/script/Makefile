CC = gcc

INC = inc
SRC = src
OBJ = obj
BIN = bin

CFLAGS = -c -g -Wall

LDFLAGS = -o

IFLAGS = -I $(INC)

all: CFSS

CFSS: $(OBJ)/main.o $(OBJ)/common.o $(OBJ)/user.o
	$(CC) $(LDFLAGS) $(BIN)/CFSS $(OBJ)/main.o $(OBJ)/common.o $(OBJ)/user.o

$(OBJ)/main.o: $(SRC)/main.c
	$(CC) $(CFLAGS) $(SRC)/main.c $(IFLAGS)
	mv main.o $(OBJ)/

$(OBJ)/common.o: $(SRC)/common.c
	$(CC) $(CFLAGS) $(SRC)/common.c $(IFLAGS)
	mv common.o $(OBJ)/

$(OBJ)/user.o: $(SRC)/user.c
	$(CC) $(CFLAGS) $(SRC)/user.c $(IFLAGS)
	mv user.o $(OBJ)/

clean:
	rm -f *.out *.o	
	rm -f $(OBJ)/*.o
	rm -f $(BIN)/*
	@echo "Cleaning Done!"

