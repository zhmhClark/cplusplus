#include "main.h"
#include"Exx.h"
#include"Square.h"
#include"Exxx.h"
void line()
{
	puts("-----------------------------------------------------------");
	cout << endl;
}

struct stu
{
	int a;
	int b;
};

int main()
{
	Ex a;
	Exx* b = new Exx;
	a = *b;
	a.func();
	line();
	char dont[] = { 'w','h','a','t' };
	//puts(dont);
	Square cube = Square(3.0);
	cube.getsize();
	cube.get_s();
	cube.Rectangle::get_s();
	cube.Diamond::get_c();

	struct stu c;
	line();
	line();
	Exx cc;
	cc.func();
	//cout << "\a" << endl;
	line();
	Exxx d,e;
	d.value = 1;
	e = d;
	d.value++;
	cout << e.value << endl;
	return 0;
}



