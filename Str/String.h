#pragma once
#include<iostream>
#include<cstring>
#include<cassert>
using namespace std;

class String;
ostream& operator<<(ostream&, const String &);
ostream& operator>>(ostream&, const String &);

class String
{
	friend ostream& operator<<(ostream&, const String &);
	friend ostream& operator>>(ostream&, const String &);

private:
	char* sPtr;
	int ilength;
	void setString(const char* s);
public:
	String(const char* = 0);
	String(const String&);
	~String();

	const String& operator+=(const String&);
	const String& operator+(const String&);
	bool operator<(const String&) const;
};