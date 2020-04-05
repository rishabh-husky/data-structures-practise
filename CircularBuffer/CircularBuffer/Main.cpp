#include <iostream>
#include "CircularBuffer.h"

using namespace std;

void midWindow();

int main() 
{
	int value = -1;
	int result = (0 == value);
	CircularBuffer c;
	int capacity = c.capacity();
	
	for (int i = 1; i <= capacity; i++) {
		c.pushToBuffer(10 * i);
	}
	c.isFull();
	for (int i = 1; i <= capacity; i++) {
		c.popFromBuffer();
	}
	c.isEmpty();
	midWindow();

	return 0;
}

void midWindow () 
{
	CircularBuffer collection;

	int capacity = collection.capacity();

	for (int i = 1; i <= capacity; i++)
	{
		collection.pushToBuffer(i * 10);
	}
	collection.popFromBuffer();
	collection.pushToBuffer(10);
	collection.popFromBuffer();
	collection.pushToBuffer(20);
	collection.isFull();
}