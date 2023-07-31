#include <iostream>

double* newDouble();

int main()
{
    double* ptr = newDouble();

    delete ptr;
    ptr = nullptr;
}

double* newDouble()
{
    return new double;
}


