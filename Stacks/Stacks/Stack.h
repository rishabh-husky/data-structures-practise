#pragma once
class Stack{
	
	static const int _size = 20;
	
	private:
		int _current;
		int _next;
		char _elements[Stack::_size];

	public:
		Stack():
			_current {0},
			_next {0},
			_elements {}
		{}

		void push(char);
		
		char top();

		char pop();

		bool empty();
};