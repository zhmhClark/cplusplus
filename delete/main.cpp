#include"head.h"
int main()
{
	int* p = new int[10];
	int* q = p;
	for (int i = 0; i < 10; i++)
	{
		q[i] = i;
		cout << q[i]<<"	";
	}
	q++;
	q++;
	cout << endl << *q;
	delete	q;
	cout <<endl<< p[0];
	return 0;
}