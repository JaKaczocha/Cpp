#include <iostream>

double scalarProduct(unsigned int size, const double* const vec1, const double* const vec2);

int main()
{
    std::cout << "Hello World!\n";
}

double scalarProduct(unsigned int size, const double* const vec1, const double* const vec2)
{
    double scalPro = 0;

    for (int i = 0; i < size; i++)
    {
        scalPro += vec1[i] * vec2[i];
    }

    return scalPro;
}