#include "InOrderTraversal.h"
#include <iostream>
using namespace std;

InOrderTraversal::InOrderTraversal(Tree tree) 
{
	t = tree;

	next = nullptr;
}

InOrderTraversal::~InOrderTraversal()
{

}

bool InOrderTraversal::walk(node * node)
{
	if (node == nullptr)
		return false;

	walk(node->left);
	
	cout << node->key << endl;

	walk(node->right);

	return true;
}


bool InOrderTraversal::traverse()
{
 	if(t.root!=nullptr)
	{
		walk(t.root);
	}

	return true;
}
