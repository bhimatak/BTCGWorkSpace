C = gcc
INC = ../inc
SRC = ../src
OBJ = ../obj
BIN = ../bin
CFLAGS = -c -g -Wall
LDFLAGS = -o
IFLAGS = -I $(INC)

test : $(OBJ)/Array2.o 
	        $(CC) $(LDFLAGS) $(BIN)/test $(OBJ)/Array2.o
$(OBJ)/Array2.o : $(SRC)/Array2.c
	        $(CC) $(CFLAGS) $(SRC)/Array2.c $(IFLAGS)
		        mv Array2.c $(OBJ)/
clean:
	rm -f a.out*.o
	rm -f $(OBJ)/*
	rm -f $(BIN)/*
	@ echo "cleaning is done"






