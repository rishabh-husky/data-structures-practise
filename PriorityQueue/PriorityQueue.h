#pragma once
class PriorityQueue
{	
	const int OUT_OF_MEMORY_EXCEPTION = 10;
	const int EMPTY_LIST_EXCEPTION = 20;
private:
	struct node* head;
	struct node* tail;
	struct node* createNode(int);
	bool moveWindowCondition(struct node *, int);
public:
	void insert(int);
	int extractMax();
};

