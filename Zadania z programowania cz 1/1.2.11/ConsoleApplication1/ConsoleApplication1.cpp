#include <iostream>
#include <iomanip>

int main()
{
    float number;
    std::cout << "enter number: ";
    std::cin >> number;

    std::cout << std::fixed;
    std::cout << std::setprecision(2);
    std::cout << "number: " <<  number;
}
