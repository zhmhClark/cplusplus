#pragma once
#include"main.h"
class Complex;
Complex& operator+(Complex &a, Complex &b);
Complex& operator+(int b, Complex &a);
Complex& operator-(Complex &a, Complex &b);
Complex& operator*(Complex &a, Complex &b);
ostream&operator<<(ostream&out, Complex &z);

class Complex
{
private:
	double re, im;
public:
	Complex(double re,double im);
	~Complex();
	friend Complex& operator+(Complex &a,Complex &b);
	friend Complex& operator+(int b,Complex &a);
		   Complex& operator+(int b);

	friend Complex& operator-(Complex &a, Complex &b);
	friend Complex& operator*(Complex &a, Complex &b);
	friend ostream&operator<<(ostream&out, Complex &z);
};