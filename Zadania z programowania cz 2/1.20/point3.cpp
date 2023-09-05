#include "point3.hpp"
#include <iostream>

point3::point3(/* args */)
{
}

point3::point3(double X, double Y, double Z) : x(X), y(Y), z(Z)
{
}

point3::~point3()
{
}

void point3::print() const
{
    std::cout << "X: " << x << " Y: " << y << " Z: " << z << std::endl;
}

void point3::cinput()
{
    std::cout << "enter X value: ";
    std::cin >> x;
    std::cout << "enter Y value: ";
    std::cin >> y;
     std::cout << "enter Z value: ";
    std::cin >> z;
}
