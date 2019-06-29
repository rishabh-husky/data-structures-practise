
#pragma once
#include <stdlib.h>
#include <vector>
#include <iostream>
#include "Datatypes.h"
using namespace std;

class Queue
{

private:
	vector<node*> q;

	bool isFull();
	void resize(int);
	node * popFront();
	void eraseFront();
public:

	Queue();
	~Queue();
	void enqueue(node*);
	node * dequeue();
	bool isEmpty();
};

