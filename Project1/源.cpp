#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int a[5];
	int i = 0,n = 0;
	srand(time(NULL));
	while (i < 4)
	{
		a[i] = rand() % 6 + 1;
		for (n = 0; n < i; n++)
		{
			if (a[i] == a[n])
			{
				i--;
				break;
			}
		}
		i++;
	}

	for (i = 0; i < 4; i++)
	{
		printf("a[%d] = %d\n", i, a[i]);
	}
	return 0;
}