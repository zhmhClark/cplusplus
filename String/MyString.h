#pragma once
#include<iostream>
#include<string>
using namespace std;

class MyString;
ostream& operator<<(ostream& out, MyString& s);
istream& operator>>(istream& in, MyString& s);

class MyString
{
	string s;
public:
	MyString(string s);
	MyString& operator+(MyString& s);
	bool operator<(MyString& s2);
	MyString& operator()(int begin, int end);
	friend ostream& operator<<(ostream& out, MyString& s);
	friend istream& operator>>(istream& in, MyString& s);
	~MyString();
};

