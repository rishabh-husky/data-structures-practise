#include "DynamicArray.h"

using namespace std;

int main () 
{
	DynamicArray da;
	da.pushBack(10);
	da.pushBack(20);
	da.pushBack(30);
	da.pushBack(40);
	cout << da.toString() << endl;
	da.remove(1);
	cout << da.toString() << endl;
	return 0;
}
