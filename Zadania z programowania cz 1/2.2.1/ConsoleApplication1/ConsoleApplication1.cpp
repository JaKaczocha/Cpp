// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

inline int absolute(int n);

int main()
{
    int n;
    std::cout << "enter number: ";
    std::cin >> n;

    std::cout << "absolute value of(" << n << ") equals:  " << absolute(n);
}

inline int absolute(int n)
{
    return n > 0 ? n : -n;
}
