CC = gcc

ProjDir = ~/BTCGWorkSpace/Classwork/day09

INC = $(ProjDir)/inc
SRC = $(ProjDir)/src
OBJ = $(ProjDir)/obj
BIN = $(ProjDir)/bin

CFLAGS = -c -g -Wall

LDFLAGS = -o

IFLAGS = -I $(INC)


all: app1 app2 app3 app4 app5

app1: $(OBJ)/file01.o
	$(CC) $(LDFLAGS) $(BIN)/app1 $?

app2: $(OBJ)/file02.o
	$(CC) $(LDFLAGS) $(BIN)/app2 $?

app3: $(OBJ)/file03.o
	$(CC) $(LDFLAGS) $(BIN)/app3 $?

app4: $(OBJ)/file04.o
	$(CC) $(LDFLAGS) $(BIN)/app4 $(OBJ)/file04.o

app5: $(OBJ)/main5.o $(OBJ)/EmpStruct.o
	$(CC) $(LDFLAGS) $(BIN)/app5 $(OBJ)/main5.o $(OBJ)/EmpStruct.o

$(OBJ)/file01.o: $(SRC)/file01.c
	$(CC) $(CFLAGS) $(SRC)/file01.c $(IFLAGS)
	mv *.o $(OBJ)/

$(OBJ)/file02.o: $(SRC)/file02.c
	$(CC) $(CFLAGS) $(SRC)/file02.c $(IFLAGS)
	mv *.o $(OBJ)/

$(OBJ)/file03.o: $(SRC)/file03.c
	$(CC) $(CFLAGS) $(SRC)/file03.c $(IFLAGS)
	mv *.o $(OBJ)/

$(OBJ)/file04.o: $(SRC)/file04.c
	$(CC) $(CFLAGS) $(SRC)/file04.c $(IFLAGS)
	mv *.o $(OBJ)/

$(OBJ)/main5.o: $(SRC)/main5.c
	$(CC) $(CFLAGS) $(SRC)/main5.c $(IFLAGS)
	mv *.o $(OBJ)/

$(OBJ)/EmpStruct.o: $(SRC)/EmpStruct.c
	$(CC) $(CFLAGS) $(SRC)/EmpStruct.c $(IFLAGS)
	mv *.o $(OBJ)/


clean:
	rm -f *.out *.o
	rm -f $(OBJ)/*.o
	rm -f $(BIN)/*
	@echo "Cleaning Done!"

