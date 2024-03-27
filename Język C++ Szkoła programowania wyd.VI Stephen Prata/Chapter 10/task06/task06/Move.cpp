#include "Move.h"
#include <iostream>

Move::Move(double a, double b)
{
	x = a;
	y = b;
}

Move Move::add(const Move& m) const
{
	int x, y;

	x = m.x + this->x;
	y = m.y + this->y;

	return Move(x, y);
}
void Move::showmove() const
{
	std::cout << "x= " << x << "  y= " << y << std::endl;
}
void Move::reset(double a, double b)
{
	x = a;
	y = b;
}
