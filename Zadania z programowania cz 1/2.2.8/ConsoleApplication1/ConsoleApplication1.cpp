#include <iostream>

float squereRoot(float number, int accurancy);

int main()
{
    float number;

    std::cout << "enter number to squere root: ";
    std::cin >> number;

    std::cout << "squere root: " << squereRoot(number, 10);
}


float squereRoot(float number, int accurancy)
{
    float tmp{ number };
    
    if (number < 0)
    {
        throw std::out_of_range("number cant be negative!");
    }
    for (int i = 0; i < accurancy; i++)
    {
        tmp = (1 / 2.0) * (tmp + (number / tmp));
    }
    return tmp;

}

