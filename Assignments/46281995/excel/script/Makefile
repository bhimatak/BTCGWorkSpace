CC = gcc

SRC = src
INC = inc
OBJ = obj
BIN = bin

all: $(BIN)/app09 $(BIN)/app10 $(BIN)/app10d $(BIN)/app11 $(BIN)/app12 $(BIN)/app13

$(BIN)/app09: $(OBJ)/Day9_3b.o
	$(CC) -o $(BIN)/app09 $(OBJ)/Day9_3b.o

$(OBJ)/Day9_3b.o: $(SRC)/Day9_3b.c
	$(CC) -c $(SRC)/Day9_3b.c -I $(INC)/
	mv Day9_3b.o $(OBJ)/

$(BIN)/app10: $(OBJ)/Day10_3c.o
	$(CC) -o $(BIN)/app10 $(OBJ)/Day10_3c.o

$(OBJ)/Day10_3c.o: $(SRC)/Day10_3c.c
	$(CC) -c $(SRC)/Day10_3c.c -I $(INC)/
	mv Day10_3c.o $(OBJ)/

$(BIN)/app10d: $(OBJ)/Day10_3d.o
	$(CC) -o $(BIN)/app10d $(OBJ)/Day10_3d.o

$(OBJ)/Day10_3d.o: $(SRC)/Day10_3d.c
	$(CC) -c $(SRC)/Day10_3d.c -I $(INC)/
	mv Day10_3d.o $(OBJ)/

$(BIN)/app11: $(OBJ)/Day11.o
	$(CC) -o $(BIN)/app11 $(OBJ)/Day11.o

$(OBJ)/Day11.o: $(SRC)/Day11.c
	$(CC) -c $(SRC)/Day11.c -I $(INC)/
	mv Day11.o $(OBJ)/

$(BIN)/app12: $(OBJ)/Day12.o
	$(CC) -o $(BIN)/app12 $(OBJ)/Day12.o

$(OBJ)/Day12.o: $(SRC)/Day12.c
	$(CC) -c $(SRC)/Day12.c -I $(INC)/
	mv Day12.o $(OBJ)/

$(BIN)/app13: $(OBJ)/Day13.o
	$(CC) -o $(BIN)/app13 $(OBJ)/Day13.o

$(OBJ)/Day13.o: $(SRC)/Day13.c
	$(CC) -c $(SRC)/Day13.c -I $(INC)/
	mv Day13.o $(OBJ)/

clean: 
	rm -f a.out *.o
	rm -f $(OBJ)/*
	rm -f $(BIN)/*
	@echo "Cleaning Done!"
