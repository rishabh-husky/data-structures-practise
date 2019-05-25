#include "PreOrderTraversal.h"
#include <iostream>


PreOrderTraversal::PreOrderTraversal(Tree tree)
{
	t = tree;
}

PreOrderTraversal::~PreOrderTraversal()
{
	
}

void PreOrderTraversal::traverse()
{
	if (t.root != nullptr)
		walk(t.root);
}

void PreOrderTraversal::walk(node * node)
{
	if (node != nullptr)
	{
		cout << node->key << endl;

		walk(node->left);

		walk(node->right);
	}
}