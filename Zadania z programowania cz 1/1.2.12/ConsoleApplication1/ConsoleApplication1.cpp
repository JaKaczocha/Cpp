#include <iostream>
#include <iomanip>
int main()
{
    float number;
    std::cout << "enter number: ";
    std::cin >> number;

    std::cout << std::scientific;
    std::cout  << "number: " << number;
}

