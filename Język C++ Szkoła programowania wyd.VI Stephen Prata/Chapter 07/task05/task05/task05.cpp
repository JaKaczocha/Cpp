#include <iostream>


unsigned long long factorial(unsigned);

int main()
{
    for (int i = 0; i <= 10; i++)
    {
        std::cout << i << ". " << factorial(i) << std::endl;
    }
}

unsigned long long factorial(unsigned number)
{
    if (number == 1 || number == 0)
    {
        return 1;
    }
    return number * factorial(number - 1);
}



