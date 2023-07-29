#include <iostream>



int fac(int n , int f = 1);

int main()
{
    int number;
    std::cout << "enter positive number: ";
    do
    {
        std::cin >> number;
    } while (number < 0);
    std::cout << "factorial of " << number << " is " << fac(number);
}

int fac(int n, int f)
{
    if (n > 1)
    {
        return fac(n - 1, f * n);
    }
    else
    {
        return f;
    }
}

