#include "Person.h"



Person::Person(char name[], char sex):sex(sex)
{
	cout << "person construct" << endl;
	strcpy(this->name, name);
}


Person::Person(char name[], char sex)
{
}

Person::~Person()
{
}
