#include "main.h"
#include"MyStack.h"
#include"Linkedlist.h"
int main()
{
	MyStack<char> a;
	a.push('a');
	a.push('b');
	a.push('c');
	a.push('d');
	int n = a.size();
	for (int i = 0; i < n; i++)
		a.pop();
	return 0;
}
