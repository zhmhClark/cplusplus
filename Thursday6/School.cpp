#include "School.h"



School::School()
{
}


School::School(char name[], char city[])
{
	cout << "school construct" << endl;
	strcpy(this->name,name);
	strcpy(this->name, name);
}

void School::print()
{
	cout << "school name:" << name << endl;
	cout << "city:" << city << endl;
}

School::~School()
{
}
