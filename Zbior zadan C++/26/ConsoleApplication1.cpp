#include <iostream>

int main()
{
    for (int j = 0; j < 30; j++)
    {

        for (int i = 0; i < 120; i++)
        {

            if (j == 0 || j == 29 || i == 0 || i == 119 || j == 14 || (j > 14 && i == 59)) {
                std::cout << "*";
            }
            else {
                std::cout << " ";
            }
            
        }

        std::cout << std::endl;
    }
    

}

