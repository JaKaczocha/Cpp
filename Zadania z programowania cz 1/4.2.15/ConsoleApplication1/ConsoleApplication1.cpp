#include <iostream>

void delArray(int* array);

int main()
{
    std::cout << "Hello World!\n";
}


void delArray(int* array)
{
    delete[] array;
    array = nullptr;
}

