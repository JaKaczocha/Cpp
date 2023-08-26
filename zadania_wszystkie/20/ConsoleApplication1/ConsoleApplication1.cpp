#include <iostream>

int main()
{
    uint32_t width;

    std::cout << "enter line width: ";
    std::cin >> width;

    for (int i{ 0 }; i < width; i++)
    {
        std::cout << "-";
    }
}
