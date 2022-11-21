CC = gcc

ProjDir = ~/BTCGWorkSpace/Classwork/day10/App_0.3v

INC = $(ProjDir)/inc
SRC = $(ProjDir)/src
OBJ = $(ProjDir)/obj
BIN = $(ProjDir)/bin

CFLAGS = -c -g -Wall

LDFLAGS = -o

IFLAGS = -I $(INC)


all: EMS

EMS: $(OBJ)/main.o $(OBJ)/common.o $(OBJ)/emp.o
	$(CC) $(LDFLAGS) $(BIN)/EMS $(OBJ)/main.o $(OBJ)/common.o $(OBJ)/emp.o

$(OBJ)/main.o: $(SRC)/main.c
	$(CC) $(CFLAGS) $(SRC)/main.c $(IFLAGS)
	mv main.o $(OBJ)/

$(OBJ)/common.o: $(SRC)/common.c
	$(CC) $(CFLAGS) $(SRC)/common.c $(IFLAGS)
	mv common.o $(OBJ)/

$(OBJ)/emp.o: $(SRC)/emp.c
	$(CC) $(CFLAGS) $(SRC)/emp.c $(IFLAGS)
	mv emp.o $(OBJ)/

clean:
	rm -f *.out *.o
	rm -f $(OBJ)/*.o
	rm -f $(BIN)/*
	@echo "Cleaning Done!"