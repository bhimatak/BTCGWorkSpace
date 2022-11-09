CC = gcc

INC = ../inc
SRC = ../src
BIN = ../bin
OBJ = ../obj

CFLAGES = -c -g -Wall
LDFLAGES = -O
IFLAGS = -I $(INC)

alpha:$(OBJ)/alpha.o
 $(CC) $(LDFLAGS) $(BIN)/alpha $?
$(OBJ)/alpha.o:$(SRC)/alpha.c
 $(CC) $(CFLAGS) $(SRC)/alpha.c $(IFLAGS)
 mv alpha.o $(OBJ)/


clean:	
	  rm -f a.out *.o
	  rm -f $(OBJ)/*
	  rm -f(BIN)/*
	  @echo "cleaning is done!"
