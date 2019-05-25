#include "Tree.h"
#include <stdlib.h>

Tree::Tree()
{
	root = nullptr;
	lastNode = root;
}

bool Tree::freeTree(node* node)
{

	return true;
}


Tree::~Tree()
{
	freeTree(root);
}


bool Tree::hasLeftLeaf(node * n)
{
	return (n->left != nullptr);
}

bool Tree::isRootNode(node * n)
{
	return (n == root);
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
