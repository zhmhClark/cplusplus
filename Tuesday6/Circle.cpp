#include "Circle.h"


Circle::Circle(double x,double y,double radius):Point(x,y),radius(radius)
{

}

double Circle::getS()
{
	return radius * radius*pi;
}

Circle::~Circle()
{
}