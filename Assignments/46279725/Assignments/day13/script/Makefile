CC = gcc
INC = ../inc
SRC = ../src
OBJ = ../obj
BIN = ../bin
CFLAGS = -c -g -Wall
LDFLAGS = -o
IFLAGS = -I $(INC)

test: $(OBJ)/maincommand.o 
	        $(CC) $(LDFLAGS) $(BIN)/test $(OBJ)/maincommand.o
$(OBJ)/maincommand.o : $(SRC)/maincommand.c
	        $(CC) $(CFLAGS) $(SRC)/maincommand.c $(IFLAGS)
		        mv maincommand.o $(OBJ)/
clean:
	rm -f a.out*.o
	rm -f $(OBJ)/*
	rm -f $(BIN)/*
	@ echo "cleaning is done"
