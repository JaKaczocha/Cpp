#include <iostream>

int* newInt();

int main()
{
    int* ptr = newInt();

    delete ptr;
    ptr = nullptr;
}

int* newInt()
{
    return new int;
}


