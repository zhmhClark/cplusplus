#pragma once
#include "Person.h"
#include "School.h"
class Student : public Person
{
private:
	int number;
	School school;
public:
	Student(int number, char name[], char sex, char s_name[], char city[]);
	~Student();
	void print();
};

