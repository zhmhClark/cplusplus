#include "Student.h"



Student::Student(int number, char name[], char sex, char s_name[], char city[]) :
	Person(name,sex),school(s_name,city),number(number)
{
	cout << "student construct" << endl;
}


Student::~Student()
{
}

void Student::print()
{
	cout << "student ID:" << number << endl;
	cout << "name:" << name << endl;
	cout << "sex:" << sex << endl;
	school.print();
}

int main()
{
	Student s(1001, (char *)"Li Ming", 'M', (char *)"DLUT", (char *)"Dalian");
	return 0;
}
