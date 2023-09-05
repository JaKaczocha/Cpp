#include <iostream>
#include "triangle.hpp"

void findBiggest(const triangle array[], const int size);
void biggest(const triangle triangle1);

int main(int argc, char** argv)
{
    constexpr int size{6};
    triangle tri[size];
    tri[0].setBase(3.2);
    tri[0].setHeight(4.52);
    tri[1].setHeight(5.02);
    tri[1].setBase(3.0);
    tri[2].setBase(1.0);
    tri[2].setHeight(3.62);
    tri[3].setBase(2.6);
    tri[3].setHeight(2.02);
    tri[4].setBase(2.5);
    tri[4].setHeight(8.02);

    findBiggest(tri, size);
}


void findBiggest(const triangle array[], const int size)
{
    int biggestBoy = 0;
    for(int i = 1; i < size; i++)
    {
        if(array[i].area() > array[biggestBoy].area())
        {
            biggestBoy = i;
        }
    }
    biggest(array[biggestBoy]);
}
void biggest(const triangle triangle1)
{
    std::cout << "base: " << triangle1.base << std::endl;
    std::cout << "height: " << triangle1.height << std::endl;
}