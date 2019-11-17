#include "PriorityQueue.h"
#include "DataTypes.h"
#include <stdlib.h>

struct node * PriorityQueue::createNode(int key) {
	struct node* newnode;
	newnode = (struct node*) malloc(sizeof(struct node));

	if (newnode == NULL) {
		throw PriorityQueue::OUT_OF_MEMORY_EXCEPTION;
	}
	newnode->key = key;
	newnode->next = nullptr;
	newnode->prev = nullptr;

	return newnode;
}

int PriorityQueue::extractMax() {
	int val {NULL};
	struct node* lastNode = nullptr;

	if (head == nullptr) {
		throw PriorityQueue::EMPTY_LIST_EXCEPTION;
	} else if (head == tail) {
		val = head->key;
		free(head);
		head = nullptr;
		tail = nullptr;
	} else {
		val = tail->key;
		lastNode = tail;
		tail = tail->prev;
		tail->next = nullptr;
		free(lastNode);
	}

	return val;
}

void PriorityQueue::insert(int key) {
	struct node* newnode = createNode(key);

	if (head == nullptr) {
		head = newnode;
		tail = newnode;
	} else if (head->key > key) {
		newnode->next = head;
		newnode->prev = nullptr;
		head->prev = newnode;
		head = newnode;
	} else if(tail->key < key) {
		tail->next = newnode;
		newnode->prev = tail;
		tail = newnode;
		newnode->next = nullptr;
	} else {
		struct node* current;
		current = head;
		while (moveWindowCondition(current, key)) {
			current = current->next;
		}
		newnode->next = current->next;
		newnode->prev = current;
		current->next->prev = newnode;
		current->next = newnode;
	}
}

bool PriorityQueue::moveWindowCondition(struct node * current, int key) {
	return ((current != tail) && (current->key > key) && (key > current->key));
}