#include <iostream>

int main()
{
    float mean = 0;
    for (int i = 0, number; i < 3; i++)
    {
        std::cout << "enter number: ";
        std::cin >> number;
        mean += number;
    }
    mean /= 3.0;
    std::cout << mean;
}

