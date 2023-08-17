// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

unsigned toPow2(unsigned x);

int main()
{
    std::cout << toPow2(16);
}

unsigned toPow2(unsigned x)
{
    unsigned i = 2, j = 0;
    while (pow(i,j) < x)
    {
        j++;
    }
    return pow(i,j);
}
