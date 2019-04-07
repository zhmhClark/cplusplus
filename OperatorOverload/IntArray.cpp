#include "IntArray.h"



IntArray::IntArray(int n)
{
	arr = new int[n];
	size = n;
}


IntArray::~IntArray()
{
}

IntArray & IntArray::operator=(IntArray & ar)
{
	size = ar.size;
	delete []arr;
	arr = new int[ar.size];
	for (int i = 0; i < size; i++)
		arr[i] = ar.arr[i];
	return *this;
}
