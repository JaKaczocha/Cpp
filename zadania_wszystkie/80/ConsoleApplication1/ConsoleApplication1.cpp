#include <iostream>

int main()
{
    int number;
    std::cout << "enter number to check: ";
    std::cin >> number;

    if (number % 3 == 0)
    {
        std::cout << number << " can be devided by 3";
    }
    else
    {
        std::cout << number << " can't be devided by 3";
    }
}
