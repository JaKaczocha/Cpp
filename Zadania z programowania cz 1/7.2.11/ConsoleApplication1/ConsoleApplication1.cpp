// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

union number
{
    int integer;
    double doublePrec;
};

struct data
{
    int tp;
    number zaw;
};

data scanData();

int main()
{
    std::cout << "Hello World!\n";
}

data scanData()
{
    data tmp;
    bool choose{ true };

    std::cout << "enter 0 if you want enter integer or 1 if you want enter real number: ";
    std::cin >> choose;
    if (choose)
    {
        std::cout << "enter real number: ";
        std::cin >> tmp.zaw.doublePrec;
        tmp.tp = 1;
    }
    else
    {
        std::cout << "enter integer: ";
        std::cin >> tmp.zaw.integer;
        tmp.tp = 0;
    }

    return tmp;
}

