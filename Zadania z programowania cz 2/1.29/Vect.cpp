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
