CC = gcc

INC = ../inc
SRC = ../src
OBJ = ../obj
BIN = ../bin

CFLAGS = -c -g -Wall

LDFLAGS = -o

IFLAGS = -I $(INC)

TestName: $(OBJ)/main.o $(OBJ)/nameUtility.o
	$(CC) $(LDFLAGS) $(BIN)/TestName $?
	$(CC) $(LDFLAGS) $(BIN)/TestName $(OBJ)/main.o $(OBJ)/nameUtility.o

$(OBJ)/main.o: $(SRC)/main.c
	$(CC) $(CFLAGS) $(SRC)/main.c $(IFLAGS)
	mv main.o $(OBJ)/

$(OBJ)/nameUtility.o: $(SRC)/nameUtility.c
	$(CC) $(CFLAGS) $(SRC)/nameUtility.c $(IFLAGS)
	mv nameUtility.o $(OBJ)/

clean:
	rm -f a.out *.o
	rm -f $(OBJ)/*
	rm -f $(BIN)/*
	@echo "Cleaning is Done!"
