C = gcc

INC = ../inc
SRC = ../src
OBJ = ../obj
BIN = ../bin

CFLAGS = -c -g -Wall

LDFLAGS = -o

IFLAGS = -I $(INC)


all: Empdetails

Empdetails: $(OBJ)/EmpStruct.o
 		$(CC) $(LDFLAGS) $(BIN)/Empdetails $?

$(OBJ)/EmpStruct.o: $(SRC)/EmpStruct.c
		$(CC) $(CFLAGS) $(SRC)/EmpStrut.c $(IFLAGS)
			mv *.o $(OBJ)/
