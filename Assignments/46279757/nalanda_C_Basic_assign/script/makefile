CC=gcc
SRC=src
INC=inc
BIN=bin
OBJ=obj
CFLAGS= -c -g -Wall
all: $(BIN)/day113e  $(BIN)/assign5 $(BIN)/day17

$(BIN)/day113e: $(OBJ)/day113e.o
			$(CC) -o $(BIN)/day113e $(OBJ)/day113e.o

$(OBJ)/day113e.o: $(SRC)/day113e.c
			$(CC) $(CFLAGS) $(SRC)/day113e.c -I $(INC)/
					mv day113e.o $(OBJ)/

$(BIN)/assign5: $(OBJ)/assign5.o
			 $(CC) -o $(BIN)/assign5 $(OBJ)/assign5.o

$(OBJ)/assign5.o: $(SRC)/assign5.c
			$(CC) $(CFLAGS) $(SRC)/assign5.c -I $(INC)/
					 mv assign5.o $(OBJ)/

$(BIN)/day17: $(OBJ)/day17.o
			$(CC) -o $(BIN)/day17 $(OBJ)/day17.o

$(OBJ)/day17.o: $(SRC)/day17.c
			 $(CC) $(CFLAGS) $(SRC)/day17.c -I $(INC)/
			 		  mv day17.o $(OBJ)/

$(BIN)/assign5b: $(OBJ)/assign5b.o
			$(CC) -o $(BIN)/assign5b $(OBJ)/assign5b.o

$(OBJ)/assign5b.o: $(SRC)/assign5b.c
			 $(CC) $(CFLAGS) $(SRC)/assign5b.c -I $(INC)/
			 		 mv assign5b.o $(OBJ)/

$(BIN)/assign4: $(OBJ)/assign4.o
			 $(CC) -o $(BIN)/assign4 $(OBJ)/assign4.o

$(OBJ)/assign4.o: $(SRC)/assign4.c
			 $(CC) $(CFLAGS) $(SRC)/assign4.c -I $(INC)/
			 		 mv assign4.o $(OBJ)/
			 		
clean:
				rm -f a.out *.o
				rm -f $(OBJ)/*
				rm -f $(BIN)/*
				@echo "Cleaning Done!"
