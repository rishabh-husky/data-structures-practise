#pragma once
#include "DataTypes.h"
#include "Tree.h"

class PostOrderTraversal
{
public:
	void traverse();

	PostOrderTraversal(Tree);
	
	~PostOrderTraversal();
private:

	Tree t;

	void walk(node *);
};

