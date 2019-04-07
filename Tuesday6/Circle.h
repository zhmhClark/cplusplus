#pragma once
#include "Point.h"
#define pi 3.14

class Circle : public Point
{
private:
	double radius;
public:
	Circle(double x = 0, double y = 0, double radius = 0);
	double getS();
	~Circle();
};

