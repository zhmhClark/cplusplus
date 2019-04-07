#pragma once
#include<iostream>
using namespace std;
class IntArray;
ostream& operator<<(ostream& out, IntArray array);
class IntArray
{
private:
	int size;
	int* arr;
public:
	IntArray(int n);
	~IntArray();
	IntArray& operator=(IntArray& ar);
	friend ostream& operator<<(ostream& out, IntArray array);
};


