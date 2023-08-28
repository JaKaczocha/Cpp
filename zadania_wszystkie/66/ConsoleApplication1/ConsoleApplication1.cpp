#include <iostream>

int main()
{
    int number, factorail{ 1 };
    std::cout << "enter number to find factorial: ";
    std::cin >> number;
    
    for (int i = 2; i <= number;i++)
    {
        factorail *= i;
    }

    std::cout << number << "! = " << factorail;
}
