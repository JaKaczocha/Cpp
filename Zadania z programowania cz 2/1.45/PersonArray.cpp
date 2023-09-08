#include "PersonArray.hpp"

PersonArray::PersonArray(unsigned int SIZE, std::string NAME, std::string LASTNAME) : size(SIZE)
{
    array = new Person* [size];
    for(int i = 0; i < size; i++)
    {
        array[i] = new Person(NAME, LASTNAME);
    }
}

PersonArray::~PersonArray()
{
    for(int i = 0; i < size; i++)
    {
        delete array[i];
    }
    delete [] array;
}

Person &PersonArray::at(unsigned int index)
{

    if(index < size)
    {
        return *array[index];
    }
    return *array[size - 1];    
}
