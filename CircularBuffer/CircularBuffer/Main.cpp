#include <iostream>
#include "CircularBuffer.h"

using namespace std;

int main() 
{
	CircularBuffer c;
	int capacity = c.capacity();
	for (int i = 1; i <= capacity; i++) {
		c.pushToBuffer(10 * i);
	}
	c.popFromBuffer();
	c.popFromBuffer();
	c.popFromBuffer();
	c.pushToBuffer(10);
	return 0;
}