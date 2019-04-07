#include "Rectangle.h"

Rectangle::Rectangle()
{
}

Rectangle::Rectangle(double length, double width):length(length),width(width)
{
}

void Rectangle::getsize()
{
	cout << endl << "length :" << length << endl << "width :" << width << endl;
}
void Rectangle::get_s()
{
	cout << "r's = " <<width * length << "\n";
}
Rectangle::~Rectangle()
{
}
