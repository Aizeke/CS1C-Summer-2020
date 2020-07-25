CC = g++
FLAGS = -std=c++14 -Wall -g
OBJS = Date.o Employee.o Programmer.o Software.o

all: hw03

hw03: hw03.cpp Date.o Employee.o Programmer.o Software.o
	$(CC) $(FLAGS) hw03.cpp -o hw03 $(OBJS)

Date.o: Date.cpp Date.h
	$(CC) $(FLAGS) -c Date.cpp -o Date.o

Employee.o: Employee.cpp Employee.h
	$(CC) $(FLAGS) -c Employee.cpp -o Employee.o

Programmer.o: Programmer.cpp Programmer.h
	$(CC) $(FLAGS) -c Programmer.cpp -o Programmer.o

Software.o: Software.cpp Software.h
	$(CC) $(FLAGS) -c Software.cpp -o Software.o

clean:
	rm *.o hw03 hw03.tar

tar:
	tar cf hw03.tar hw03.scr Makefile hw03.cpp Date.cpp Employee.cpp Programmer.cpp Software.cpp Date.h Employee.h Programmer.h Software.h