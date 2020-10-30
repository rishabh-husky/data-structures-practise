#pragma once

struct HashNode {
	struct ElementNode* firstElement;
	struct HashNode* next;
};


struct ElementNode {
	int value;
	struct ElementNode* next;
};