#include <iostream>

void swapVal(int* first, int* second);

int main()
{
    int a = -1, b = 3;

    swapVal(&a, &b);
    std::cout << a;

}

void swapVal(int* first, int* second)
{
    std::swap(*first, *second);
}