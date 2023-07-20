#include "myarray.h"
#include <iostream>

MyArray::MyArray()
{

}

MyArray::MyArray( int size )
{
    this->size = size;
    array = new int [ this->size ];
    for( int i = 0; i < this->size; i++)
    {
        array[ i ] = i + 1;
    }
}

MyArray::~MyArray()
{
    delete [] array;
    array = NULL;

}

void MyArray::Print()
{
    std::cout << "array: ";
    for( int i = 0; i < size; i++ )
    {
        std::cout << array[ i ] << ' ';
    }
}

MyArray& MyArray::operator=( const MyArray &obj )
{
    delete [] array;
    array = NULL;

    size = obj.size;

    array = new int [ size ];

    for( int i = 0; i < size; i++ )
    {
        array[ i ] = i + 1;
    }

    return *this;
}
