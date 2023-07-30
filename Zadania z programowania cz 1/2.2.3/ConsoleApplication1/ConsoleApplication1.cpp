#include <iostream>

int biggestDivider(int number);

int main()
{
    int number;
    std::cout << "enter number to check biggest divider: ";
    std::cin >> number;

    std::cout << "biggest divider of number: " << biggestDivider(number);
}

int biggestDivider(int number)
{
    int divider;
    if (number % 2)
    {
        for (divider = number / 3; number % divider; divider--);
        return divider;
    }
    else
    {
        return number / 2;
    }
}
