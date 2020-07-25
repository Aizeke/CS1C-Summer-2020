CC = g++
FLAGS = -std=c++14 -Wall -g
OBJS = hw06.o

all: hw06

hw06: hw06.cpp
		$(CC) $(FLAGS) hw06.cpp -o hw06

clean:
		rm *.o hw06 hw06.tar

tar:
		tar cf hw06.tar hw06.scr Makefile hw06.cpp