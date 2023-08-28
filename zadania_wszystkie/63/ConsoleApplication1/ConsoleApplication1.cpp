#include <iostream>

int main()
{
    for (int i{ 10 }; i <= 100; i++)
    {
        if (i % 10 == 0 || i % 8 == 0)
        {
            continue;
        }
        if (i % 4 == 0)
        {
            std::cout << i << " ";
        }
    }
}

