#include "Stack.h"

void Stack::push(char c)
{
	if (_current <= Stack::_size)
	{
		_current = _next;
		_elements[_next++] = c;
	}
}

char Stack::top()
{
	if(_current>0)
		return _elements[_current];
}

char Stack::pop()
{
	if (_current >= 0){
		char last = _elements[_current];
		_elements[_current] = '\0';
		if (_current) {
			_current--;
		}
		_next--;
		return last;
	}
}

bool Stack::empty()
{
	return (_next == _current);
}