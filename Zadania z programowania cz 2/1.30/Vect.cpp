#include "Vect.hpp"
#include <iostream>

Vect::Vect(/* args */)
{
}

Vect::~Vect()
{
}

void Vect::printDim() const
{
    std::cout << "[ ";
    for(int i = 0; i < size; i++)
    {
        std::cout << dimensions[i] << "  ";
    }
    std::cout << "]" << std::endl;
}

void Vect::inputDim()
{
    for(int i = 0; i < size; i++)
    {
        std::cout << "enter " << i << " dimension: ";
        std::cin >> dimensions[i];
    }
}

void Vect::add(Vect v)
{
    for(int i = 0; i < size; i++)
    {
        this->dimensions[i] += v.dimensions[i];
    }
}

bool compare(Vect bigger, Vect smaller)
{
    double lenB{0}, lenS{0};
    for(int i{0}; i < 10; i++)
    {
        lenB += bigger.dimensions[i] * bigger.dimensions[i];
        lenS += smaller.dimensions[i] * smaller.dimensions[i];
    }

    return lenB > lenS ? true : false;
}