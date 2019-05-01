#pragma once
#include "DataTypes.h"
#include "Tree.h"
using namespace std;

class InOrderTraversal
{

public:
	bool traverse();
	
	InOrderTraversal(Tree);

	~InOrderTraversal();
private:

	node * next;
	
	Tree t;

	bool walk(node *);

};

