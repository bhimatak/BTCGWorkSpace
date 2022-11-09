CC = gcc
INC = ../inc
SRC = ../src
BIN = ../bin
OBJ = ../obj

CFLAGES = -c -g -Wall
LDFLAGES = -O
IFLAGS = -I $(INC)

arr:$(OBJ)/arr.o
	 $(CC) $(LDFLAGS) $(BIN)/arr $?
$(OBJ)/arr.o:$(SRC)/arr.c
	 $(CC) $(CFLAGS) $(SRC)/arr.c $(IFLAGS)
	  mv arr.o $(OBJ)/

clean:  
	          rm -f a.out *.o
		  rm -f $(OBJ)/*
	          rm -f(BIN)/*
		  @echo "cleaning is done!"
