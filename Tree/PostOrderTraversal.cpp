#include "PostOrderTraversal.h"
#include <iostream>
using namespace std;

PostOrderTraversal::PostOrderTraversal(Tree tree)
{
	t = tree;
}


PostOrderTraversal::~PostOrderTraversal()
{
}

void PostOrderTraversal::traverse()
{
	if (t.root != nullptr)
		walk(t.root);
}

void PostOrderTraversal::walk(node * node)
{
	if (node != nullptr)
	{
		walk(node->left);

		walk(node->right);

		cout << node->key << endl;
	}
}