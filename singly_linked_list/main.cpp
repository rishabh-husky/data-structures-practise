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

int topFront(struct node *);

void popFront(struct node **, struct node **);

void pushBack(int,struct node **,struct node **);

int topBack(struct node *);

void freeList(struct node *, struct node *);

int main()
{
	struct node * head = nullptr;

	struct node * tail = nullptr;

	int key{};

	key = topFront(head);

	pushFront(10, &head, &tail);

	key = topFront(head);

	pushFront(20, &head, &tail);

	key = topFront(head);

	popFront(&head,&tail);

	key = topFront(head);

	pushBack(30, &head, &tail);

	pushBack(40, &head, &tail);

	key = topFront(head);

	freeList(head, tail); //free list at the end of execution

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

int topFront(struct node * head)
{
	if (head == nullptr)
		return NULL;

	return head->key;
}

void popFront(struct node ** head,struct node ** tail)
{
	struct node * node;

	if(*head==nullptr)
	{
		cout << "Empty list" << endl;
	}

	node = *head;
	
	*head = (*head)->next;
	
	if (*head == nullptr)
		*tail = nullptr;

	free(node);
}

void pushBack(int key, struct node ** head, struct node ** tail)
{
	struct node * newnode;

	newnode = createNode(key);
	
	if (*tail == nullptr)
	{
		*head = *tail = newnode;
	}
	else 
	{
		(*tail)->next = newnode;
		*tail = newnode;
	}	
}

int topBack(struct node * tail)
{
	if (tail == nullptr)
		cout << "Empty list";
	else
		return tail->key;
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
