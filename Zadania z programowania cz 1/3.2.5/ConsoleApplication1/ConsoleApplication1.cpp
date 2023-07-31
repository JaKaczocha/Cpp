#include <iostream>

int sum(int* first, int* second);

int main()
{
    std::cout << "Hello World!\n";
}

int sum(int* first, int* second)
{
    return (*first + *second);
}

