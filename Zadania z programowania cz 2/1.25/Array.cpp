#include "Array.hpp"

Array::Array(/* args */)
{
}

Array::~Array()
{
}

PersonalData& Array::at(int index)
{
    if( index < 0 || index > 9 )
    {
        return array[0];
    }
    return array[index];
}