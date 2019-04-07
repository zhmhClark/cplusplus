#include "pch.h"
#include<cstdio>
#include<random>
#include <iostream>
using namespace std;

int main()
{
	long long int num,min,max;
	cout <<"please input the number"<<endl;
	cin >> num;
	
	long long int *p = new long long int[num];
	long long int *q = p;
	for (long long int i = 0 ; i <num; i++)
	{
		*p++ = rand()*rand() % num;
	}

	min = *q;	max = *q;
	for (long long int i = 0; i < num; i++)
	{
		if (*q > max) max = *q;
		if (*q < min) min = *q;
		q++;
	}
	
	cout << "max = " << max << " min = " << min;

	return 0;
}


