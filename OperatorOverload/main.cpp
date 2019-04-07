#include "main.h"
#include"Complex.h"
int main()
{
	Complex z1 = Complex(1 , 1);
	Complex z2 = Complex(2 , 2);
	Complex z3 = z1 + z2;
	Complex z4 = z1 * z2;
	cout << z3 << " " << z4 << endl;
}
