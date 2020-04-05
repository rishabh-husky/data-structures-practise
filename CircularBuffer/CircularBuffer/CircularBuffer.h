#pragma once
#include <iostream>

using namespace std;

class CircularBuffer
{
private:
	static const int BUFFER_CAPACITY = 5;
	int front;
	int rear;
	int collection[CircularBuffer::BUFFER_CAPACITY] = {NULL};
	int nextIndex(int);
	int current;
public:
	static const int BUFFER_FULL = 1;
	static const int POP_BUFFER_EMPTY = 2;
	CircularBuffer();
	void pushToBuffer(int);
	int popFromBuffer();
	bool isEmpty();
	bool isFull();
	int capacity();
};

