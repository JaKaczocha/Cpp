#include <iostream>

float root(float number, int degree, int accurancy);

int main()
{
    float number;

    std::cout << "enter number to squere root: ";
    std::cin >> number;

    std::cout << "squere root: " << root(number, 3, 20);
}


float root(float number,int degree, int accurancy)
{
    float tmp{ number }, powerTmp = 1;

    if (number < 0)
    {
        throw std::out_of_range("number cant be negative!");
    }
    for (int i = 0; i < accurancy; i++, powerTmp = 1)
    {
        for (int i = 1; i < degree; i++)
        {
            powerTmp *= tmp;
        }
        tmp = (1 / static_cast<float>(degree) ) * ( (degree - 1)*tmp + (number / powerTmp));
    }
    return tmp;

}


