#include <iostream>
#include <stdlib.h>

using namespace std;

struct node
{
	int key;

	struct node * next;
};

struct node * createNode(int);

void pushFront(int, struct node **, struct node **);

int TopFront(struct node *);

void freeList(struct node *, struct node *);

int main()
{
	struct node * head = nullptr;

	struct node * tail = nullptr;

	int key{};

	key = TopFront(head);

	pushFront(10, &head, &tail);

	key = TopFront(head);

	pushFront(20, &head, &tail);

	key=TopFront(head);

	freeList(head, tail);

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

int TopFront(struct node * head)
{
	if (head == nullptr)
		return NULL;

	return head->key;
}

void freeList(struct node * head, struct node * tail)
{
	struct node * current, * next;

	current = head;

	while(current!=tail)
	{
		next = current->next;

		free(current);

		current = next;
	}

	if (tail != nullptr) //when tail points to non-null node 
	{
		free(tail);
	}
}
