#include <iostream>
#include "triangle.hpp"

int main(int argc, char** argv)
{
    triangle tri;
    tri.setBase(4.0);
    tri.setHeight(5.52);

    std::cout << tri.area();
}