#include "vectorn.hpp"

vectorn::vectorn(int n) : size(n)
{
    coordinates = new double[size];
}

vectorn::~vectorn()
{
    delete [] coordinates;
}

double &vectorn::at(int index)
{
    return coordinates[index];
}

int vectorn::dimensions()
{
    return size;
}
