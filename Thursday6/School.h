#pragma once
#include<iostream>
#include<cstring>
using namespace std;

class School
{
private:
	char name[10];
	char city[10];
public:
	School(char name[],char city[]);
	void print();
	~School();
};

