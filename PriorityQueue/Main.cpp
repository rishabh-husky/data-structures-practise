#include "PriorityQueue.h"
#include <iostream>

using namespace std;

int main() {
	PriorityQueue pq;
	cout << "Insert 10" << endl;
	pq.insert(10);
	
	
	cout << "Insert 20" << endl;
	pq.insert(20);

	cout << "Extract:" << endl;
	cout << pq.extractMax() << endl;


	cout << "Insert 15" << endl;
	pq.insert(15);
	cout << "Insert 30" << endl;
	pq.insert(30);
	
	cout << "Extract:" << endl;
	cout << pq.extractMax() << endl;

	cout << "Insert 5" << endl;
	pq.insert(5);
	
	cout << "Extract:" << endl;
	cout << pq.extractMax() << endl;

	cout << "Extract:" << endl;
	cout << pq.extractMax() << endl;
	
	cout << "Insert 50" << endl;
	pq.insert(50);

	cout << "Extract:" << endl;
	cout << pq.extractMax() << endl;

	cout << "Extract:" << endl;
	cout << pq.extractMax() << endl;

	cout << "Extract:" << endl;
	cout << pq.extractMax() << endl;

	return 0;
}