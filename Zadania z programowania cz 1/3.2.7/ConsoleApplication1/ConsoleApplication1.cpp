#include <iostream>

void swapRef(int& a, int& b);

int main()
{
    int a = 6, b = -6534;
    swapRef(a, b);

    std::cout << a;
}

void swapRef(int& a, int& b)
{
    std::swap(a, b);
}
