CC = g++
FLAGS = -std=c++14 -Wall -g
OBJS = Inventory.o

all: hw07

hw07: hw07.cpp Inventory.o
		$(CC) $(FLAGS) hw07.cpp -o hw07 $(OBJS)

Inventory.o: Inventory.h
		$(CC) $(FLAGS) -c Inventory.cpp -o Inventory.o

clean:
		rm *.o hw07 hw07.tar

tar:
		tar cf hw07.tar hw07.scr Makefile hw07.cpp Inventory.cpp Inventory.h