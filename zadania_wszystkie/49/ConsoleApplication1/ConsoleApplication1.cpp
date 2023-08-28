#include <iostream>

int main()
{
    int height{ 0 };

    std::cout << "enter height: ";
    std::cin >> height;
    std::cout << std::endl;
    for (int h = 2; h < height + 2; h++)
    {
        for (int i = 1; i <= h; i++)
        {
            for (int j = height; j > i; j--)
            {
                std::cout << " ";
            }
            for (int j = 1; j < i * 2; j++)
            {
                std::cout << "*";
            }
            std::cout << std::endl;
        }
    }
}

