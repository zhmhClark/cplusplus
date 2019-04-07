#include "Complex.h"

Complex::Complex(double re, double im):re(re),im(im)
{
}

Complex::~Complex()
{
}

Complex& Complex::operator+(int b)
{
	Complex* c = new Complex(re + b, im);
	return *c;
}

Complex& operator+(Complex &a, Complex &b)
{
	Complex* c = new Complex(a.re + b.re, a.im + b.im);
	return *c;
}

Complex& operator+(int b,Complex & a)
{
	Complex* c = new Complex(a.re+b,a.im);
	return *c;
}

Complex& operator-(Complex &a, Complex &b)
{
	Complex* c = new Complex(a.re - b.re, a.im - b.im);
	return *c;
}

Complex& operator*(Complex & a, Complex & b)
{
	Complex* c = new Complex(a.re*b.re - a.im*b.im , a.re*b.im + a.im*b.re);
	return *c;
}

ostream & operator<<(ostream & out, Complex & z)
{
	out << z.re << " + " << z.im << "i";
	return out;
}