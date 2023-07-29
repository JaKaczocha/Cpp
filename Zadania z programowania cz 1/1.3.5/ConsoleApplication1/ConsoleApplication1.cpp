#include <iostream>

int main()
{
    int choose;
    float a, b, c,h,p;

    std::cout << "input 0 to enter side length or other value to input base and height: ";
    std::cin >> choose;

    if (choose)
    {
        std::cout << "enter base: ";
        std::cin >> a;
        std::cout << "enter height: ";
        std::cin >> h;

        std::cout << "area of triangle: " << (a * h) / 2.0f;

    }
    else
    {
        std::cout << "enter first side: ";
        std::cin >> a;
        std::cout << "enter second side: ";
        std::cin >> b;
        std::cout << "enter third side: ";
        std::cin >> c;

        p = (a + b + c) / 2.0f;
       
        if (b < c)
        {
            std::swap(b, c);
        }
        if (a < b)
        {
            std::swap(a, b);
        }
        if (a < b + c)
        {
            std::cout << "area: of triangle: " << sqrt(p * (p - a) * (p - b) * (p - c));
        }
        else
        {
            std::cout << "triangle doesnt exist!!!";
        }


    }

}

