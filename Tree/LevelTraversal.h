#pragma once
#include <iostream>
#include <stdlib.h>
#include "DataTypes.h"
#include "Tree.h"
#include "Queue.h"

using namespace std;

class LevelTraversal
{
private:
	Tree t;
	void walk(node *);
	bool isTreeEmpty();
public:
	LevelTraversal(Tree);
	~LevelTraversal();
	void traverse();
};

