#include <iostream>

int main()
{
    uint32_t width, height;

    std::cout << "enter height: ";
    std::cin >> height;
    std::cout << "enter width: ";
    std::cin >> width;


    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            std::cout << 'x';
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;

    for (int i = 1; i <= height; i++)
    {
        for (int j = 1; j <= width; j++)
        {
            if (i == 1 || j == 1 || j == width || i == height)
            {
                std::cout << 'x';
            }
            else
            {
                std::cout << ' ';
            }
                
        }
        std::cout << std::endl;
    }
}
