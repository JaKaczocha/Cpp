#include <iostream>

void delArray(double* array);

int main()
{
    std::cout << "Hello World!\n";
}


void delArray(double* array)
{
    delete[] array;
    array = nullptr;
}

