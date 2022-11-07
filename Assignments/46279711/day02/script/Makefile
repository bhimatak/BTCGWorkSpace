CC = gcc

SRC = src
INC = inc 
BIN = bin
OBJ = obj



$(BIN)/app1: $(OBJ)/Array.o
	        $(CC) -o $(BIN)/app1 $(OBJ)/Array.o

$(OBJ)/Array.o: $(SRC)/Array.c
	                $(CC) -c $(SRC)/Array.c -I $(INC)/
			mv Array.o $(OBJ)/


$(BIN)/app1: $(OBJ)/AscArray.o
	                $(CC) -o $(BIN)/app1 $(OBJ)/AscArray.o

$(OBJ)/AscArray.o: $(SRC)/AscArray.c
	                        $(CC) -c $(SRC)/AscArray.c -I $(INC)/
				 mv AscArray.o $(OBJ)/


$(BIN)/app1: $(OBJ)/lrArray.o
	                $(CC) -o $(BIN)/app1 $(OBJ)/lrArray.o

$(OBJ)/lrArray.o: $(SRC)/lrArray.c
	                        $(CC) -c $(SRC)/lrArray.c -I $(INC)/
				                        mv lrArray.o $(OBJ)/
clean:
	rm -f a.out *.o
	rm -f $(OBJ)/*
	rm -f $(BIN)/*
	@echo "Cleaning Done!"
