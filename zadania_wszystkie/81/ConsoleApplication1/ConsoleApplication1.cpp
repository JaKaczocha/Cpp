#include <iostream>
#include <cmath>

int main()
{
    int number;
    std::cout << "enter number to check: ";
    std::cin >> number;

    if (number % 3 == 0 && number % 2 == 0 && 10 <= std::abs(number))
    {
        std::cout << number << " can be devided by 3, is even and has 2 digits";
    }
    else
    {
        std::cout << number << " can't be devided by 3/odd/less than 2 digit";
    }
}
