#include "Square.h"

Square::Square(double edge):Diamond(edge),Rectangle(edge,edge),edge(edge)
{
}

void Square::get_s()
{
	cout << "s's = " << edge * edge << "\n";
}

Square::~Square()
{
}
