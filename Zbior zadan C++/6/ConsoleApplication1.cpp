#include <iostream>

int main()
{
    float a = 0, b = 12, c = 4;
    float delta;

    if (a != 0)
    {
        delta = b * b - 4 * a * c;

        if (delta < 0)
        {
            std::cout << "0 solutions" <<std::endl;
        }
        else if (delta == 0)
        {
            std::cout << "solution: " <<  - b / (2 * a);
        }
        else if (delta > 0)
        {
            std::cout << "first solution: " << (-b - sqrt(delta)) / 2 * a << std::endl; 
            std::cout << "second solution: " << (-b + sqrt(delta)) / 2 * a << std::endl;
        }
    }
    else
    {
        std::cout << "solution: " << -c / b << std::endl;
    }



}

