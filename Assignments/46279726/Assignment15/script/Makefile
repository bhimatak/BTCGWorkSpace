C = gcc
   
SRC = src
INC = inc
BIN = bin
OBJ = obj
     
	   
all: $(BIN)/app1

$(BIN)/app1: $(OBJ)/Assign15.o
	             $(CC) -o $(BIN)/app1 $(OBJ)/Assign15.o
					  
$(OBJ)/Assign15.o: $(SRC)/Assign15.c
					     $(CC) -c $(SRC)/Assign15.c -I $(INC)/
				         mv Assign15.o $(OBJ)/
															    
clean:
		rm -f a.out *.o
		rm -f $(OBJ)/*
		rm -f $(BIN)/*
		@echo "Cleaning Done!"
