CC = gcc

INC = ../inc
SRC = ../src
BIN = ../bin
OBJ = ../obj

CFLAGES = -c -g -Wall
LDFLAGES = -O
IFLAGS = -I $(INC)

array:$(OBJ)/Arr.o
 $(CC) $(LDFLAGS) $(BIN)/Arr.c $?

$(OBJ)/maxcount.o:$(SRC)/Arr.c
 $(CC) $(CFLAGS) $(SRC)/Arr.c $(IFLAGS)
 mv Arr.o $(OBJ)/

clean:        
	 rm -f a.out *.o
	 rm -f $(OBJ)/*
	 rm -f(BIN)/*
	 @echo "cleaning is done!"
