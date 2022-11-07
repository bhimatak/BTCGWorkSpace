
CC = gcc

SCR = scr
INC = inc
BIN = bin
OBJ = obj
all: $(BIN)/app

SetUp:
		  mkdir $(OBJ) $(BIN)
$(BIN)/app: $(OBJ)/3c.o
		        $(CC) -o $(BIN)/app $(OBJ)/3c.o

$(OBJ)/3c.o: $(SCR)/3c.o
	      $(CC) -c $(SCR)/3c.c -I $(INC)/
	      mv 3c.o $(OBJ)/
clean:
		rm -f a.out *.o
	        rm -f $(OBJ)/*
		rm -f $(BIN)/*
		@echo "Cleaning Done!"
