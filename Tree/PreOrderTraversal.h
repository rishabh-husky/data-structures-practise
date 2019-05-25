#pragma once
#include "DataTypes.h"
#include "Tree.h"
using namespace std;

class PreOrderTraversal
{
private:
	Tree t;

	void walk(node *);

public:
	void traverse();

	PreOrderTraversal(Tree);

	~PreOrderTraversal();

};

