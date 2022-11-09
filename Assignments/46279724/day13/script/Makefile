CC = gcc

INC = ../inc
SRC = ../src
BIN = ../bin
OBJ = ../obj

CFLAGES = -c -g -Wall
LDFLAGES = -O
IFLAGS = -I $(INC)

server:$(OBJ)/server.o
 $(CC) $(LDFLAGS) $(BIN)/server $?
$(OBJ)/server.o:$(SRC)/server.c
 $(CC) $(CFLAGS) $(SRC)/server.c $(IFLAGS)
 mv server.o $(OBJ)/


clean:

          rm -f server *.o
          rm -f $(OBJ)/*
          rm -f(BIN)/*
         @echo "cleaning is done!"
