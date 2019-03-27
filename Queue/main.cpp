#include <iostream>
#include "Queue.h"

int main() 
{
	Queue newQueue{};

	newQueue.enqueue(1);

	newQueue.enqueue(2);

	newQueue.enqueue(3);

	newQueue.dequeue();

	newQueue.dequeue();

	newQueue.isEmpty();

	newQueue.dequeue();

	newQueue.isEmpty();
}