#include "CircularBuffer.h"

CircularBuffer::CircularBuffer() 
{

	front = 0;
	current = 0;
	cout << "current buffer size" << endl;
	cout << collection[0] << endl;
}

void CircularBuffer::pushToBuffer(int value)
{
	if (isFull()) 
	{
		throw BUFFER_FULL;
	}

	collection[current] = value;
	current++;
}

bool CircularBuffer::isFull()
{
	return (current == front && collection[current]);
}

int CircularBuffer::popFromBuffer()
{
	if (isEmpty()) 
	{
		throw POP_BUFFER_EMPTY;
	}

	int key = collection[front];
	collection[front] = NULL;

	if (front == current) 
	{
		front = current = 0;
	}
	else 
	{
		front++;
	}
	return key;
}

bool CircularBuffer::isEmpty() 
{
	return (current == front && collection[current] != NULL);
}


int CircularBuffer::capacity()
{
	return BUFFER_CAPACITY;
}