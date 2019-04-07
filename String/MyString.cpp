#include "MyString.h"


MyString::MyString(string s):s(s)
{
}

MyString & MyString::operator+(MyString & s2)
{
	MyString* sum = new MyString(this->s+s2.s);
	return *sum;
}

bool MyString::operator<(MyString & s2)
{
	return this->s<s2.s;
}

MyString & MyString::operator()(int begin, int end)
{
	MyString* sub = new MyString(this->s.substr(begin,end));
	return *sub;
}


MyString::~MyString()
{
}

ostream & operator<<(ostream & out, MyString& s)
{
	out << s.s;
	return out;
}

istream & operator>>(istream & in, MyString & s)
{
	in >> s.s;
	return in;
}

int main()
{
	MyString s1("hello"), s2("world");
	MyString s3 = s1 + s2;
	cout << s3;
	return 0;
}