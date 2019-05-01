#include "DataTypes.h"
#include "InOrderTraversal.h"
#include "Tree.h"
#include "InOrderTraversal.h"

int main()
{
	Tree newtree;
	
	node * L1=newtree.appendToNode(10, &(newtree.root));

	node * L2=newtree.appendToNode(20, &(L1->left));

	L2=newtree.appendToNode(30, &(L1->right));

	InOrderTraversal newInOrderTraversal(newtree);
	
	newInOrderTraversal.traverse();

	return 0;
}