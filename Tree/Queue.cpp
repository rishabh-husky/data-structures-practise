#include "Queue.h"

using namespace std;

Queue::Queue()
{
	q = {};
}


Queue::~Queue()
{
	q.clear();
	q.shrink_to_fit();
}

bool Queue::isFull()
{
	return (q.size() == q.max_size());
}

void Queue::resize(int amount)
{
	q.resize(q.size() + amount);
}

void Queue::enqueue(node* node)
{
	if (isFull()) {
		resize(5);
	}
	q.push_back(node);
}

void Queue::eraseFront()
{
	q.erase(q.begin());
}

node * Queue::popFront()
{
	node* node = q.front();
	eraseFront();
	return node;
}

node * Queue::dequeue()
{
	try {
		if (isEmpty()) {
			throw nullptr;
		}
		return popFront();
	}
	catch (node* e) {
		std::cout << "Exception in Queue::dequeue" << std::endl;
		return e;
	}
}

bool Queue::isEmpty()
{
	return (q.size() == 0);
}