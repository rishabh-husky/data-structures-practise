#include "Stack.h"
#include <string>

using namespace std;

bool isBalanced(string);

int main()
{
	string balanced = "[()]";

	isBalanced(balanced);

	string unbalancedless = "[()";
	
	isBalanced(unbalancedless);

	string unbalancedmore = "[()]]";

	isBalanced(unbalancedmore);

	string balancedmore = "([[()]])";

	isBalanced(balancedmore);
}

bool isBalanced(string toBeTested)
{
	Stack stk;

	int i;

	char top,charTest;

	
	for (i = 0; toBeTested[i] != '\0'; i++)
	{
		charTest = toBeTested[i];

		if(charTest =='('|| charTest == '[')
			stk.push(charTest);
		else {
			if (stk.empty()) {
				return false;
			}
			top = stk.pop();

			if ((top == '[' && charTest != ']') || (top == '(' && charTest != ')'))
				return false;
		}
	}

	return stk.empty();
}