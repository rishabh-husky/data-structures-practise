#pragma once
#include "DataTypes.h"

class Tree
{
public:
	node * root;

	Tree();

	~Tree();
	
	node * appendToNode(int,node **);

private:
	node * lastNode;
	
	bool freeTree(node *);

	node * createNode(int);

	bool hasLeftLeaf(node*);

	bool isRootNode(node *);
};