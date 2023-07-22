// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int n, number, sum = 0; 
    std::cout << "enter number of numbers entered: ";
    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        std::cin >> number;
        sum += number;
    }

    std::cout << "sum: " << sum;


}

