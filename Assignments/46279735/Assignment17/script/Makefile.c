CC = gcc
CFLAGS = -g -Wall
LDFLAGS = -pthred
INCLUDEPATH = ./../inc
SRCPATH = ./../src
OBJPATH = ./../obj
BINPATH = ./../bin

$(BINPATH)/main: $(OBJPATH)/main.o $(OBJPATH)/assign.o
          $(CC) $(CFLAGS) $(LDFLAGS) -o main $(OBJPATH)/main.o $(OBJPATH)/assign.o
		                   mv main $(BINPATH)
$(OBJPATH)/main.o: $(SRCPATH)/main.c $(INCLUDEPATH)/common.h
         $(CC) $(CFLAGS) -c $(SRCPATH)/main.c -I $(INCLUDEPATH)/
		                 mv main.o $(OBJPATH)/
$(OBJPATH)/assign.o: $(SRCPATH)/assign.c $(INCLUDEPATH)/common.h
        $(CC) $(CFLAGS) -c $(SRCPATH)/assign.c -I $(INCLUDEPATH)/
		                 mv assign.c $(OBJPATH)/
clear:
      rm$(BINPATH)/main $(OBJPATH)/main.o $(OBJPATH)/assign.c
