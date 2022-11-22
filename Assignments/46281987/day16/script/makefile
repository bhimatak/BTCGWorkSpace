CC = gcc

ProjDir = ~/BTCGWorkSpace/Assignments/46281987/day16

INC = $(ProjDir)/inc
SRC = $(ProjDir)/src
OBJ = $(ProjDir)/obj
BIN = $(ProjDir)/bin

CFLAGS = -c -g -Wall

LDFLAGS = -o

IFLAGS = -I $(INC)


all: app1

app1: $(OBJ)/assign4.o
			$(CC) $(LDFLAGS) $(BIN)/app1 $?

$(OBJ)/assign4.o: $(SRC)/assign4.c
			$(CC) $(CFLAGS) $(SRC)/assign4.c $(IFLAGS)
			mv *.o $(OBJ)/

clean:
	rm -f *.out *.o
	rm -f $(OBJ)/*.o
	rm -f $(BIN)/*
	@echo "Cleaning Done!"
