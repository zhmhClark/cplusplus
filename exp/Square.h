#pragma once
#include "Diamond.h"
#include"Rectangle.h"
class Square :
	public Diamond,
	public Rectangle
{
private:
	double edge;
public:
	Square(double edge);
	void get_s();
	~Square();
};

