CC = g++
FLAGS = -std=c++14 -Wall -g

all: hw13

hw13: hw13.cpp queue.h
		$(CC) $(FLAGS) hw13.cpp -o hw13
clean:
		rm *.o hw13 hw13.tar

tar:
		tar cf hw13.tar hw13.scr Makefile hw13.cpp queue.h
