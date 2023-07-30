// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int a, b, tmp;

    std::cout << "enter a: ";
    std::cin >> a;
    std::cout << "enter b: ";
    std::cin >> b;

    while (b != 0)
    {
        tmp = b;
        b = a % b;
        a = tmp;
    }

    std::cout <<"gcd(a,b): "<<  a;
}

