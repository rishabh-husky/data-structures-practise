#pragma once

#include "Datatypes.h"

class Queue
{
private:
	struct node * head;
	struct node * tail;
public:
	Queue();
	~Queue();
};

