#include "vectorn.hpp"

vectorn::vectorn(int n) : size(n)
{
    coordinates = new double[size];
}

vectorn::~vectorn()
{
    delete [] coordinates;
}

double &vectorn::at(int index) const
{
    return coordinates[index];
}

int vectorn::dimensions() const
{
    return size;
}

vectorn addV(const vectorn& v1,const vectorn& v2)
{
    int size {v1.dimensions()};
    if(v1.dimensions() < v2.dimensions())
    {
        size = v2.dimensions();
    }
    
    vectorn v3( size );

    for(int i = 0; i < v1.dimensions(); i++)
    {
        v3.at(i) += v1.at(i);
    }
    for(int i = 0; i < v2.dimensions();i++)
    {
        v3.at(i) += v2.at(i);
    }
    return v3;
}

