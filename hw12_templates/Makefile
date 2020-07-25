CC = g++
FLAGS = -std=c++14 -Wall -g

all: hw12

hw12: hw12.cpp queue.h
		$(CC) $(FLAGS) hw12.cpp -o hw12
clean:
		rm *.o hw12 hw12.tar

tar:
		tar cf hw12.tar hw12.scr Makefile hw12.cpp queue.h