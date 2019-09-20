#include "DynamicArray.h";
#include <iostream>

using namespace std;

int main () 
{
	DynamicArray da;
	da.pushBack(10);
	cout << da.get(0) << endl;
	cout << da.size() << endl;
	da.pushBack(20);
	da.pushBack(30);
	cout << da.get(2) << endl;
	cout << da.size() << endl;
	da.pushBack(40);
	cout << da.get(3) << endl;
	cout << da.size() << endl;

	return 0;
}