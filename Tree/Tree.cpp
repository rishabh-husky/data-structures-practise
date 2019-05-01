#include "Tree.h"
#include <stdlib.h>

Tree::Tree()
{
	root = nullptr;
	lastNode = root;
}

Tree::~Tree()
{
}


node * Tree::appendToNode(int key,node * *appendTo)
{
	*appendTo = createNode(key);

	if (*appendTo != root) {

		(*appendTo)->parent=lastNode;
	}

	lastNode = *appendTo;

	return lastNode;
}

node * Tree::createNode(int key)
{
	node * newnode = (node *)(malloc(sizeof(node)));

	if(newnode!=nullptr)
	{
		newnode->key = key;

		newnode->left = nullptr;

		newnode->right = nullptr;

		newnode->parent = nullptr;
	}
	
	return newnode;
}
