CC=gcc
AR=ar -rcs
OBJECTS_MAIN=main.o
OBJECTS_LIB=myBank.o
FLAGS= -Wall -g


all: main myBank.a

main: $(OBJECTS_MAIN) myBank.a
	$(CC) $(FLAGS) -o main $(OBJECTS_MAIN) myBank.a
myBank.a:$(OBJECTS_LIB)
	$(AR) myBank.a $(OBJECTS_LIB)
main.o:main.c myBank.h
	$(CC) $(FLAGS) -c main.c
myBank.o:myBank.c myBank.h
	$(CC) $(FLAGS) -c myBank.c

.PHONY: clean all

clean:
	rm -f *.o *.a main
