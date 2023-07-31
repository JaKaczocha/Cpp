#include <iostream>

int max(unsigned a, unsigned b, unsigned c = 0, unsigned d = 0, unsigned e = 0);

int main()
{
    std::cout << max(1, 6, 4, 2, 7);
}

int max(unsigned a, unsigned b, unsigned c, unsigned d, unsigned e)
{
    if (e > d)
    {
        std::swap(e, d);
    }
    if (d > c)
    {
        std::swap(d, c);
    }
    if (c > b)
    {
        std::swap(c, b);
    }
    if (b > a)
    {
        std::swap(a, b);
    }
    return a;
}
