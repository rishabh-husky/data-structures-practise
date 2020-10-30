#pragma once
#include <stdlib.h>
#include "DataTypes.h"

class Hash
{
	const int OUT_OF_MEMORY_EXCEPTION = 10;
private:
	int n;
	int m;
	struct HashNode* start = nullptr;
	struct HashNode* createHashList();
	int valueToHash(int);
	bool addToHashList(int, int);
	bool pushToPosition(struct HashNode*, int);
	struct ElementNode* createElementNode(int);
public:
	Hash(int);
	bool add(int);
};

