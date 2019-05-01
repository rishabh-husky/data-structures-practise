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

	node * createNode(int);
};