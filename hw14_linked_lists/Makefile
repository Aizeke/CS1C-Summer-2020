CC = g++
FLAGS = -std=c++14 -Wall -g

all: hw14

hw14: hw14.cpp LinkedList.h
		$(CC) $(FLAGS) hw14.cpp -o hw14
clean:
		rm *.o hw14 hw14.tar

tar:
		tar cf hw14.tar hw14.scr Makefile hw14.cpp LinkedList.h
