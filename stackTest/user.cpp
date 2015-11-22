#include "../stack/stack.h"
#include <stdio.h>

void f()
{
	Stack::push('c');
	if(Stack::pop()!='c')
	{
		printf("Hello World\n");
	}
}

int main()
{
	f();
	return 0;
}