#pragma once
#include "Hash.h"
#include <math.h>


struct ElementNode* Hash::createElementNode(int num) {
	struct ElementNode* newNode;
	newNode = (struct ElementNode*)malloc(sizeof(struct ElementNode));
	if (newNode == NULL) {
		throw OUT_OF_MEMORY_EXCEPTION;
	}
	newNode->value = num;
	newNode->next = nullptr;
	return newNode;
}

Hash::Hash(int Length) {
	n = 10 ^ Length;
	m = ceil(n * 0.8);
}

bool Hash::pushToPosition(struct HashNode* hashLocation, int num) {
	struct ElementNode* current = hashLocation->firstElement;
	try {
		if (current != nullptr) {
			while (current->next != nullptr) {
				current = current->next;
			}
			current->next = createElementNode(num);
		} else {
			current = createElementNode(num);
		}
		return true;
	} catch (int e) {
		throw e;
	}
}



struct HashNode* Hash::createHashList() {
	struct HashNode* newNode;
	newNode = (struct HashNode*)malloc(sizeof(struct HashNode) * n);
	if (newNode == NULL) {
		throw OUT_OF_MEMORY_EXCEPTION;
	}
	newNode->firstElement = nullptr;
	newNode->next = nullptr;
	return newNode;
}

bool Hash::addToHashList(int hash, int num) {
	try {
		if (start == nullptr) {
			start = createHashList();
		}
		pushToPosition(start + hash, num);
		return true;
	}
	catch (int e) {
		throw e;
	}
}

int Hash::valueToHash(int num) {
	return num;
}

bool Hash::add(int num) {
	int hashValue = valueToHash(num);
	return addToHashList(hashValue, num);
}
