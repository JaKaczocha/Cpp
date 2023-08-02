#include <iostream>

void copy(unsigned int size, const int* const src, const int* const des);
void copyReverse(unsigned int size, const int* const src, int* const des);

int main()
{
    std::cout << "Hello World!\n";
}

void copy(unsigned int size, const int* const src, int* const des)
{
    for (int i = 0; i < size; i++)
    {
         des[i] = src[i];
    }  
}

void copyReverse(unsigned int size, const int* const src, int* const des)
{
    for (int i = 0, j = size - 1; i < size; i++, j--)
    {
        des[j] = src[i];
    }
}