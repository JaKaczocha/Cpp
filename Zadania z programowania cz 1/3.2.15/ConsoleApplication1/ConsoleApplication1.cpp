#include <iostream>

void set(const int* value, int* ptr);

int main()
{
    const int abc{ 1311 };
    int var;
    const int* ptr{ &abc };


    set(ptr, &var);

    std::cout << var;
}

void set(const int* value, int* ptr)
{
    *ptr = *value;
}

