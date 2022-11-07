


CC = gcc

SRC = src
INC = inc
BIN = bin
OBJ = obj

all: $(BIN)/app $(BIN)/app1 $(BIN)/app4 $(BIN)/app5

SetUp:
		mkdir $(OBJ) $(BIN)

$(BIN)/app: $(OBJ)/Pro.o
		$(CC) -o $(BIN)/app $(OBJ)/Pro.o 

$(OBJ)/Pro.o: $(SRC)/Pro.c
		$(CC) -c $(SRC)/Pro.c -I $(INC)/
		mv Pro.o $(OBJ)/


$(BIN)/app1: $(OBJ)/Pro1.o
		$(CC) -o $(BIN)/app1 $(OBJ)/Pro1.o 

$(OBJ)/Pro1.o: $(SRC)/Pro1.c
		$(CC) -c $(SRC)/Pro1.c -I $(INC)/
		mv Pro1.o $(OBJ)/


$(BIN)/app4: $(OBJ)/Pro4.o
		$(CC) -o $(BIN)/app4 $(OBJ)/Pro4.o 

$(OBJ)/Pro4.o: $(SRC)/Pro4.c
		$(CC) -c $(SRC)/Pro4.c -I $(INC)/
		mv Pro4.o $(OBJ)/


$(BIN)/app5: $(OBJ)/Pro5.o
		$(CC) -o $(BIN)/app5 $(OBJ)/Pro5.o 

$(OBJ)/Pro5.o: $(SRC)/Pro5.c
		$(CC) -c $(SRC)/Pro5.c -I $(INC)/
		mv Pro5.o $(OBJ)/
clean:
		rm -f a.out *.o
		rm -f $(OBJ)/*
		rm -f $(BIN)/*
		@echo "Cleaning Done!"


