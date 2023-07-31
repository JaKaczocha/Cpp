#include <iostream>


int sum(unsigned int a, unsigned int b, unsigned int c = 0, unsigned int d=0, unsigned int e=0);

int main()
{
    std::cout << "Hello World!\n";
}

int sum(unsigned int a, unsigned int b, unsigned int c, unsigned int d, unsigned int e)
{
    return a + b + c + d + e;
}

