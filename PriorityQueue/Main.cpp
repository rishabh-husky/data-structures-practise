#include "PriorityQueue.h"
#include <iostream>

using namespace std;

int main() {
	PriorityQueue pq;
	
	pq.insert(10);
	pq.insert(20);
	pq.insert(15);
	pq.insert(30);
	cout << "Extract:" << endl;
	cout << pq.extractMax() << endl;
	pq.insert(5);
	cout << "Extract:" << endl;
	cout << pq.extractMax() << endl;
	cout << "Extract:" << endl;
	cout << pq.extractMax() << endl;
	cout << "Extract:" << endl;
	cout << pq.extractMax() << endl;
	cout << "Extract:" << endl;
	cout << pq.extractMax() << endl;
	return 0;
}