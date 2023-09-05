#include <iostream>
#include "triangle.hpp"

void greater(const triangle triangle1, const triangle triangle2)
{
    if (triangle1.area() > triangle2.area())
    {
        std::cout << "base: " << triangle1.base << std::endl;
        std::cout << "height: " << triangle1.height << std::endl;
    }
    else
    {
        std::cout << "base: " << triangle1.base << std::endl;
        std::cout << "height: " << triangle2.height << std::endl;
    }
}
int main(int argc, char** argv)
{
    triangle tri;
    tri.setBase(4.0);
    tri.setHeight(5.52);

    triangle tri2;
    tri2.setBase(3.0);
    tri2.setHeight(5.02);

    greater(tri, tri2);
}