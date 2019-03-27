#pragma once

#include "Datatypes.h"
#include <stdlib.h>

class Queue
{

private:

	struct node * head;
	struct node * tail;
	struct node * createNode(int);

public:
	
	Queue();
	~Queue();

	void enqueue(int);

	int dequeue();

	bool isEmpty();
};

