#include <iostream>

int main()
{
    float number;
    std::cout << "enter number: ";
    std::cin >> number;
    std::cout << "absolute value of number = " << (number < 0 ? -number : number);
}
