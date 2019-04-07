#pragma once
#include<iostream>
#include<cstring>
using namespace std;

class Person
{
protected:
	char name[10];
	char sex;
public:
	Person(char name[],char sex);
	~Person();
};

