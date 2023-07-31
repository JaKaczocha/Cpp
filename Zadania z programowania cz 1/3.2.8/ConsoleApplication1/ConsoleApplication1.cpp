#include <iostream>

void swapRefPtr(int& a, int* b);

int main()
{
    std::cout << "Hello World!\n";
}


void swapRefPtr(int& a, int* b)
{
    std::swap(a, *b);
}

