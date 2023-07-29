#include <iostream>

int main()
{
    int first, second;

    std::cout << "enter first number: ";
    std::cin >> first;
    std::cout << "enter second number: ";
    std::cin >> second;

    std::cout << "greater is " << (first > second ? first : second);
}

