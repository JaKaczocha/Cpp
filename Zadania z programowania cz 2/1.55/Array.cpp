#include "Array.hpp"
#include <stdexcept>

Array::Array(int Size) : size(Size)
{
    if (Size < 0)
    {
        throw std::invalid_argument("index out of range");
    }
    array = new int[size]{0};
}

Array::Array(const Array &cpy)
{
    size = cpy.getSize();
    array = new int[size]{0};
    for(int i = 0; i < size; i++) 
    {
        array[i] = cpy.value(i);
    }
}

Array::~Array()
{
    delete [] array;
}

int Array::value(int index) const
{
    if(index >= size || index < 0)
    {
        throw std::out_of_range ("index out of range");
    }
    return array[index];
}

int Array::getSize() const
{
    return size;
}

void Array::setValue(int index, int value)
{
    if(index < 0)
    {
        throw std::out_of_range("index out of range");
    }
    else if(index >= size)
    {
        
        int* tmp = new int[index + 1]{0};
        for(int i = 0; i < size; i++) 
        {
            tmp[i] = array[i];
        }
        size = index + 1;
        delete[] array;
        array = tmp;
        array[index] = value;
    }
    else
    {
        array[index] = value;
    }
}
