#include <iostream>
#include "DataTypes.h"
#include "Queue.h"
#include "Tree.h"
#include "InOrderTraversal.h"
#include "PreOrderTraversal.h"
#include "PostOrderTraversal.h"
#include "LevelTraversal.h"

int main()
{
	Tree newtree;
	
	/** Binary Search Tree **/
	
	node* L1 = newtree.appendToNode(30, &(newtree.root));

	node* L11 = newtree.appendToNode(20, &(L1->left));

	node* L12 = newtree.appendToNode(60, &(L1->right));

	node* L111 = newtree.appendToNode(10, &(L11->left));

	node* L112 = newtree.appendToNode(25, &(L11->right));

	node* L121 = newtree.appendToNode(50, &(L12->left));

	node* L122 = newtree.appendToNode(70, &(L12->right));

	node* L1111 = newtree.appendToNode(5, &(L111->left));

	node* L1112 = newtree.appendToNode(12, &(L111->right));

	InOrderTraversal newInOrderTraversal(newtree);
	
	cout << "In Order Traversal" << endl;

	newInOrderTraversal.traverse();

	cout << "Pre Order Traversal" << endl;

	PreOrderTraversal preOrder(newtree);
	
	preOrder.traverse();

	cout << "Post Order Traversal" << endl;

	PostOrderTraversal postOrder(newtree);

	postOrder.traverse();

	LevelTraversal newLevelTraversal(newtree);

	newLevelTraversal.traverse();

	return 0;
}