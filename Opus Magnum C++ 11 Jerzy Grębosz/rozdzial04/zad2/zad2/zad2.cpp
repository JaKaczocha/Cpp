// zad2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    
        for (int i = 1; i <= 100; i++)
        {
            std::cout << i << std::endl;
            if (!(i % 10))
            {
                std::cout << "Zakonczona dziesiątka :)" << std::endl;
               
            }
        }
    
    
}


