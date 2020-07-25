// QUEUE_H_
#pragma once

#include <iostream>
#include <assert.h>
#include <cstdlib>

using namespace std;

template <typename T>
class Queue {
	const int DEFAULT_SIZE = 5;
public:
	// Default Constructor
	Queue();
	// Overloaded Constructor
	Queue(int size);
	// Copy Constructor
	Queue(const Queue<T> &obj);
	//Destructor
	~Queue();

	// post-conditions:
	//		Enqueue places new item in the back of the Array;
	// pre-condition:
	//		Returns Void;
	void enqueue(T input);

	// post-conditions:
	//		Dequeue removes item from front;
	// pre-condition:
	//		Returns the item that was removed;
	void dequeue();

	T front() const;
	T back() const;

	int size() const;
	bool isEmpty();
	bool isFull();

private:
	T *qPtr;
	int begin;
	int end;
	int count;
	int maxSize;
};

template<typename T>
inline Queue<T>::Queue()
{
	qPtr = new T[DEFAULT_SIZE];
	maxSize = DEFAULT_SIZE;
	begin = 0;
	end = -1;
	count = 0;
}

template<typename T>
inline Queue<T>::Queue(int size)
{
	qPtr = new T[size];
	maxSize = size;
	begin = 0;
	end = -1;
	count = 0;
}

// Copy Constuctor
template<typename T>
inline Queue<T>::Queue(const Queue<T>& obj)
{
	delete[] qPtr;

	qPtr = new T[obj.maxSize];
	maxSize = obj.maxSize;
	begin = obj.begin;
	end = obj.end;
	count = obj.count;

	for (int i = 0; i < obj.maxSize; i++) {
		qPtr[i] = obj.qPtr[i];
	}
}

// Destructor
template<typename T>
inline Queue<T>::~Queue()
{
	delete[] qPtr;
}

// Place at the end of the Queue;
template<typename T>
inline void Queue<T>::enqueue(T input)
{

	assert(isFull());
	cout << "\nAssert Failed: Cannot place new element\nQueue is Full\n\n";

	cout << "Inserting: " << input << '\n';

	// Determine where to insert new item;
	end = (end + 1) % maxSize;
	qPtr[end] = input;
	// Increment Array;
	count++;

	//if (isFull()) {
	//	cout << "\nCannot place new element\nQueue is Full\n\n";
	//}
	//else {
	//	cout << "Inserting: " << input << '\n';

	//	// Determine where to insert new item;
	//	end = (end + 1) % maxSize;
	//	qPtr[end] = input;
	//	// Increment Array;
	//	count++;
	//}
}

// Deletes from the front of the Queue;
template<typename T>
inline void Queue<T>::dequeue()
{
	if (isEmpty()) {
		cout << "\nCannot delete element\nQueue is Empty\n\n";
	}
	else {
		cout << "Removing: " << qPtr[begin] << '\n';

		// Determine where to move begin;
		begin = (begin + 1) % maxSize;
		// Shrink the size of the array;
		count--;
	}
}

// returns the element at the front without removing it;
template<typename T>
inline T Queue<T>::front() const
{
	assert(!isEmpty());
	cout << "Queue is Empty;\n";
	return qPtr[begin];
}

template<typename T>
inline T Queue<T>::back() const
{
	assert(!isEmpty());
	cout << "Queue is Empty;\n";
	return qPtr[end];
}

template<typename T>
inline int Queue<T>::size() const
{
	return count;
}

template<typename T>
inline bool Queue<T>::isEmpty()
{
	return (size() == 0);
}

template<typename T>
inline bool Queue<T>::isFull()
{
	return (size() == maxSize);
}