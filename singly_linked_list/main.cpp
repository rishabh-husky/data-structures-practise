#include <iostream>
#include "datatypes.h"
#include <stdlib.h>

using namespace std;

struct node * createNode(int);

void pushFront(int, struct node **, struct node **);

int main()
{
	struct node * head = nullptr;

	struct node * tail = nullptr;

	pushFront(10, &head, &tail);

	pushFront(20, &head, &tail);


	return 0;

}


void pushFront(int key, struct node ** head, struct node ** tail)
{
	struct node * newnode;

	newnode = createNode(key);

	newnode->next = *head;

	*head = newnode;

	if (*tail == nullptr)
		*tail = *head;
}

struct node * createNode(int key)
{
	struct node * newnode;

	newnode = (struct node *)malloc(sizeof(struct node));

	newnode->key = key;

	newnode->next = nullptr;

	return newnode;
}

