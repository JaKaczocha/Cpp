#include <iostream>

int main()
{
    constexpr uint16_t size{ 16 };
    size_t p{ 1 };

    for (uint16_t i{ 1 }; i <= size; i++, p = 1)
    {
        for (int j = 0; j < i ; j++)
        {
            p *= 2;
        }
        std::cout << p << "  :  ";
    }
}

