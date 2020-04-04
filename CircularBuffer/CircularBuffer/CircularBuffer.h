#pragma once
#include <iostream>

using namespace std;

class CircularBuffer
{
private:
	static const int BUFFER_CAPACITY = 5;
	int front;
	int current;
	int collection[CircularBuffer::BUFFER_CAPACITY] = {NULL};
public:
	const int BUFFER_FULL = 1;
	const int POP_BUFFER_EMPTY = 2;
	CircularBuffer();
	void pushToBuffer(int);
	int popFromBuffer();
	bool isEmpty();
	bool isFull();
	int capacity();
};

