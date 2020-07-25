CC = g++
FLAGS = -std=c++14 -Wall -g
OBJS = Triangle.o Rectangle.o

all: hw09

hw09: hw09.cpp Triangle.o Rectangle.o
		$(CC) $(FLAGS) hw09.cpp -o hw09 $(OBJS)

Triangle.o: Triangle.h Shape.h
		$(CC) $(FLAGS) -c Triangle.cpp -o Triangle.o

Rectangle.o: Rectangle.h Shape.h
		$(CC) $(FLAGS) -c Rectangle.cpp -o Rectangle.o

clean: 
		rm *.o hw09 hw09.tar

tar:
		tar cf hw09.tar hw09.scr Makefile hw09.cpp Rectangle.cpp Triangle.cpp Shape.h Rectangle.h Triangle.h