CC = gcc

INC = ../inc
SRC = ../src
OBJ = ../obj
BIN = ../bin

CFLAGS = -c -g -Wall

LDFLAGS = -o

IFLAGS = -I $(INC)


all: app1 app2 app3 app4 app5

app1: $(OBJ)/main1.o
	$(CC) $(LDFLAGS) $(BIN)/app1 $?

app2: $(OBJ)/main2.o
	$(CC) $(LDFLAGS) $(BIN)/app2 $?

app3: $(OBJ)/main3.o
	$(CC) $(LDFLAGS) $(BIN)/app3 $?

app4: $(OBJ)/main4.o
	$(CC) $(LDFLAGS) $(BIN)/app4 $(OBJ)/main4.o

app5: $(OBJ)/main5.o $(OBJ)/EmpStruct.o
	$(CC) $(LDFLAGS) $(BIN)/app5 $(OBJ)/main5.o $(OBJ)/EmpStruct.o

$(OBJ)/main1.o: $(SRC)/main1.c
	$(CC) $(CFLAGS) $(SRC)/main1.c $(IFLAGS)
	mv *.o $(OBJ)/

$(OBJ)/main2.o: $(SRC)/main2.c
	$(CC) $(CFLAGS) $(SRC)/main2.c $(IFLAGS)
	mv *.o $(OBJ)/

$(OBJ)/main3.o: $(SRC)/main3.c
	$(CC) $(CFLAGS) $(SRC)/main3.c $(IFLAGS)
	mv *.o $(OBJ)/

$(OBJ)/main4.o: $(SRC)/main4.c
	$(CC) $(CFLAGS) $(SRC)/main4.c $(IFLAGS)
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

