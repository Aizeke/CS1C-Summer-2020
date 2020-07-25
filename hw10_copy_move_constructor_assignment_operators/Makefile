CC = g++
FLAGS = -std=c++14 -Wall -g

all: hw10

hw10: hw10.cpp
		$(CC) $(FLAGS) hw10.cpp -o hw10

clean: 
		Makefile hw10.o hw10.scr

tar:
		tar cf hw10.tar Makefile hw10.cpp hw10.scr
