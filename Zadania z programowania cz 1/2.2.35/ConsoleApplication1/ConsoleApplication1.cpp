#include <iostream>


bool check(unsigned m, unsigned n = 0);

int main()
{
    std::cout << "2 % 6: " << check(2, 6) << std::endl;
    std::cout << "6 % 6: " << check(6, 6) << std::endl;
    std::cout << "is 10 even: " << check(10) << std::endl;
}

bool check(unsigned m, unsigned n)
{
    if (n != 0)
    {
        return (m % n == 0 ? true : false);  
    }
    else
    {
        return (m % 2 == 0 ? true : false);
    }
}

