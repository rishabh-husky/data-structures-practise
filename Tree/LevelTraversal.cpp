#include "LevelTraversal.h"

LevelTraversal::LevelTraversal(Tree tree)
{
	t = tree;
}

LevelTraversal::~LevelTraversal()
{

}

bool LevelTraversal::isTreeEmpty() 
{
	return (t.root == nullptr);
}


void LevelTraversal::traverse()
{

	try {
		if (isTreeEmpty()) {
			throw false;
		}
		walk(t.root);
	}
	catch (bool e) {
		cout << "Exception during LevelTraversal::traverse " + e << endl;
	}
}

void LevelTraversal::walk(node * node)
{
	struct node* currentNode;
	Queue q;
	q.enqueue(node);
	while (!q.isEmpty()) {
		currentNode = q.dequeue();
		cout << currentNode->key << endl;
		if (currentNode->left != nullptr) {
			q.enqueue(currentNode->left);
		}
		if (currentNode->right != nullptr ) {
			q.enqueue(currentNode->right);
		}
	}
}
