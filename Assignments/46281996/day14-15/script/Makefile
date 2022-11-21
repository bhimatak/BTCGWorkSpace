CC = gcc
SRC = src
INC = inc
OBJ = obj
BIN = bin

day14-15: $(BIN)/day14-15

$(BIN)/day14-15:$(OBJ)/day14-15.o
        $(CC) -o $(BIN)/day14-15 $(OBJ)/day14-15.o
	
$(OBJ)/day14-15.o: $(SRC)/day14-15.c
	$(CC) $(CFLAGS) $(SRC)/day14-15.c -I $(INC)/


clean: 
	rm -f a.out *.o
	rm -f $(OBJ)/*
	rm -f $(BIN)/*
	@echo "Cleaning Done!"
