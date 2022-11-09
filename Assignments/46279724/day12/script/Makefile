CC =gcc

INC = ../inc
SRC = ../src
OBJ = ../obj
BIN = ../bin

CFLAGES = -c -g -Wall

LDFLAGS = -o

IFLAGES = -I $(INC)

main: $(OBJ)/display.o $(OBJ)/mainARRAY.o
   $(CC) $(LDFLAGS) $(BIN)/main $?
$(OBJ)/display.o: $(SRC)/display.c
   $(CC) $(CFLAGS) $(SRC)/display.c $(IFLAGs)
   mv display.o $(OBJ)/
$(OBJ)/mainARRAY.o: $(SRC)/mainARRAY.c
   $(CC) $(CFLAGS) $(SRC)/mainARRAY.c $(IFLAGs)
   mv mainARRAY.o $(OBJ)/

clean:
        
          rm -f main *.o
          rm -f $(OBJ)/*
          rm -f $(BIN)/*
          @echo "cleaning is Done!"


