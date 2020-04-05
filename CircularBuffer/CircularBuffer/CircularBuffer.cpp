#include "CircularBuffer.h"

CircularBuffer::CircularBuffer() 
{

	front = -1;
	rear = -1;
	current = -1;
	cout << "current buffer size" << endl;
	cout << collection[0] << endl;
}

void CircularBuffer::pushToBuffer(int value)
{
	if (isFull()) {
		throw BUFFER_FULL;
	}

	if (current < 0) {
		 front = rear = 0;
		 collection[front] = value;
	}
	else {
		collection[current] = value;
		rear = current;
	}
	
	current = nextIndex(rear);
}

int CircularBuffer::popFromBuffer()
{
	if (isEmpty()) {
		throw POP_BUFFER_EMPTY;
	}

	int key = collection[front];
	collection[front] = NULL;

	if (front == rear) {
		front = rear = current = -1;
	} else
	{
		front = nextIndex(front);
	}

	return key;
}

bool CircularBuffer::isEmpty() 
{
	return (front == -1 && rear == -1 && current == -1);
}


bool CircularBuffer::isFull()
{
	if (isEmpty()) {
		return false;
	}
	
	return (collection[current] != NULL);
}

int CircularBuffer::nextIndex(int index)
{
	int  nextIndex;
	if (index == (capacity()) - 1) {
		nextIndex = 0;
	} else {
		nextIndex = index + 1;
	}
	return nextIndex;
}

int CircularBuffer::capacity()
{
	return BUFFER_CAPACITY;
}