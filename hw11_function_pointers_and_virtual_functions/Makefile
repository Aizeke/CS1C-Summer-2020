CC = g++
FLAGS = -std=c++14 -Wall -g

all: hw11

hw11: hw11.cpp
		$(CC) $(FLAGS) hw11.cpp -o hw11

clean:
		rm *.o hw11 hw11.tar hw11.scr

tar:
		tar cf hw11.tar Makefile hw11.scr hw11.cpp