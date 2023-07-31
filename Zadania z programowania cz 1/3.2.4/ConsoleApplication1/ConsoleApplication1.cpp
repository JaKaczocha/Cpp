#include <iostream>

void swapValAsce(int* first, int* second);

int main()
{
    std::cout << "Hello World!\n";
}

void swapValDesc(int* first, int* second)
{
    if (*second < *first)
    {
        std::swap(*second, *first);
    }
}

