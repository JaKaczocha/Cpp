#include "Pointer.hpp"

Pointer::Pointer(int SIZE) : size(SIZE)
{
    ptr = new int[SIZE];
}
Pointer::Pointer() : ptr(nullptr), size(0)
{

}
Pointer::~Pointer()
{
    delete [] ptr;
    ptr = nullptr;
}