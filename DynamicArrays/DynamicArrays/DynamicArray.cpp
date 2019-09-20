#include "DynamicArray.h"


DynamicArray::DynamicArray() 
{
	DArr = createDArray(2);

	capacity = 2;
}

DynamicArray::~DynamicArray() 
{
	free(DArr);
}

int * DynamicArray::createDArray(int capacity) 
{
	int * arr;

	arr = (int *) malloc(sizeof(int) * capacity);

	if (arr == NULL) {
		throw OUT_OF_MEMORY_EXCEPTION;
	}

	return arr;
}

bool DynamicArray::conditionOutOfBound(int i)
{
	return (i < 0 || i > arrSize);
}

bool DynamicArray::isArrayFull()
{
	return (arrSize == capacity);
}

void DynamicArray::increaseSize()
{
	int newCapacity = 2 * capacity;

	int*  cArr = createDArray(newCapacity);

	for (int i = 0; i < arrSize; i++) {
		cArr[i] = DArr[i];
	}

	free(DArr);

	DArr = cArr;

	capacity = newCapacity;
}

int DynamicArray::get(int i) 
{
	if (conditionOutOfBound(i)) {
		throw DynamicArray::OUT_OF_BOUND_EXCEPTION;
	}
	return DArr[i];
}

void DynamicArray::set(int i, int value)
{
	if (conditionOutOfBound(i))
	{
		throw DynamicArray::OUT_OF_BOUND_EXCEPTION;
	}
	DArr[i] = value;
}

void DynamicArray::pushBack(int value) 
{
	if (isArrayFull()) {
		increaseSize();
	}
	DArr[arrSize++] = value;
}

void DynamicArray::remove(int i) 
{
	if (conditionOutOfBound(i)) {
		throw OUT_OF_BOUND_EXCEPTION;
	}

	for (int j = i; j < arrSize - 1; j++) {
		DArr[j] = DArr[j + 1];
	}

	arrSize--;
}

int DynamicArray::size() const
{
	return arrSize;
}