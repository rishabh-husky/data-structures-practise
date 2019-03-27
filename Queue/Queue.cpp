#include "Queue.h"

using namespace std;

Queue::Queue()
{
	tail = head = nullptr;
}


Queue::~Queue()
{

}

struct node * Queue::createNode(int key)
{
	struct node * newnode;
	
	newnode = (struct node *)malloc(sizeof(struct node));

	newnode->key = key;
	
	newnode->next = nullptr;

	return newnode;
}

void Queue::enqueue(int key)
{
	struct node * node;

	node = createNode(key);

	if(head==nullptr)
	{
		head = node;
		tail = node;
	}
	else 
	{
		tail->next = node;
		tail = node;
	}

}

int Queue::dequeue()
{
	int key = head->key;
	
	struct node * tempnode = head;

	head = head->next;

	if(head == nullptr) 
		tail = nullptr;

	free(tempnode);
	
	return key;
}

bool Queue::isEmpty()
{
	return (head == nullptr);
}