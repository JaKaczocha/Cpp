#include <iostream>

int main()
{
    double number;

    do
    {
        std::cout << "enter positive number: ";
        std::cin >> number;
    } while (number < 0);

    std::cout << "sqrt( " << number << " ) = " << sqrt(number);
}

