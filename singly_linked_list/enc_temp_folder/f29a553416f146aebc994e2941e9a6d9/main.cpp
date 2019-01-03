#include <iostream>
#include "datatypes.h"
#include <stdlib.h>

using namespace std;

struct node * createNode(int);

void pushFront(int, struct node **, struct node **);

void printList(struct node * , struct node *);

int main()
{
	struct node * head = nullptr;
	
	struct node * tail = nullptr;
		
	pushFront(10,&head,&tail);

	pushFront(20, &head, &tail);

	printList(head, tail);

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



void printList(struct node * start, struct node * end)
{
	struct node * ptr;

	ptr = start;

	if (ptr == nullptr) {

		cout << "Linked list is empty or unreachable";

	} else {

		while (ptr != end)
		{
			ptr = start->next;

			cout << "\nKey is" + ptr->key;
		}

		cout << "\nKey is" + end->key;
	}

}
