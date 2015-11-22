#include "stack.h"

namespace Stack
{
	const int max_size = 200;
	char v[max_size];
	int top = 0;
}

void Stack::push(char c)
{
	if(top == max_size)
	{
		return;
	}
}
char Stack::pop()
{
	return 'c';
}