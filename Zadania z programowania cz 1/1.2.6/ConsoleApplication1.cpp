#include <iostream>

int main()
{
    constexpr int size{ 3 };

    int numbers[3];
    
    for (int i = 0; i < 3; i++)
    {
        std::cout << "enter number: ";
        std::cin >> numbers[i];
    }
    for (int i = 0; i < size; i++)
    {
        std::cout << numbers[i] << std::endl;
    }
    
}

