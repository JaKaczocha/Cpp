#include <iostream>

int main()
{
    std::cout << "   ";
    for (int x = 1; x <= 10; x++)
    {
        if (x < 10)
        {
            std::cout << "   " <<  x;
        }
        else
        {
            std::cout << "  " << x ;
        }
    }
    std::cout << std::endl;
    std::cout << std::endl;
    for (int i = 1; i <= 10; i++)
    {
        
        if (i  < 10)
        {
            std::cout <<' ' << i << "  ";
        }
        else
        {
            std::cout << i << "  ";
        }
        for (int j = 1; j <= 10; j++)
        {
            if (i * j < 10)
            {
                std::cout << " ";
            }
            if (i * j < 100)
            {
                std::cout << " ";
            }
            std::cout << i * j << " ";
            
        }
        std::cout << '\n';
    }
}
