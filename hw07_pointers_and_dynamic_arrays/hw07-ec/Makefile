CC = g++
FLAGS = -std=c++14 -Wall -g
OBJS = Inventory.o

all: hw07ec

hw07ec: hw07ec.cpp Inventory.o
		$(CC) $(FLAGS) hw07ec.cpp -o hw07ec $(OBJS)

Inventory.o: Inventory.h
		$(CC) $(FLAGS) -c Inventory.cpp -o Inventory.o

clean:
		rm *.o hw07ec hw07ec.tar

tar:
		tar cf hw07ec.tar hw07ec.scr Makefile hw07ec.cpp Inventory.cpp Inventory.h