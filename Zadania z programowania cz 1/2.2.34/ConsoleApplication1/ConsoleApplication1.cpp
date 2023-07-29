#include <iostream>


int64_t product(int a, int b , int c = 1, int d = 1, int e = 1);

int main()
{
    std::cout << product(6, 1, 2, 3, 2);
}

int64_t product(int a, int b, int c, int d, int e)
{
    return a * b * c * d * e;
}

