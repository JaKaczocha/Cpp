#include "point.hpp"
#include <iostream>

point::point(/* args */)
{
}

point::point(double X, double Y) : x(X), y(Y)
{
}

point::~point()
{
}

void point::print() const
{
    std::cout << "X: " << x << " Y: " << y << std::endl;
}

void point::cinput()
{
    std::cout << "enter X value: ";
    std::cin >> x;
    std::cout << "enter Y value: ";
    std::cin >> y;
}
