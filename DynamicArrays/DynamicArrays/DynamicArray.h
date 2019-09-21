#pragma once
#include <stdlib.h>
#include <iostream>
#include <sstream>

using namespace std;

class DynamicArray
{
	const int OUT_OF_BOUND_EXCEPTION = 10;
	const int OUT_OF_MEMORY_EXCEPTION = 20;
private:
	int * DArr;

	int arrSize{0};

	int capacity;

	bool conditionOutOfBound(int);

	int* createDArray(int);

	bool isArrayFull();

	void increaseSize();
public:
	DynamicArray();

	~DynamicArray();
	
	int get(int);

	void set(int, int);

	void pushBack(int);

	void remove(int);

	int size();

	string toString();
};

