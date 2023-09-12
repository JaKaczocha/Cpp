#include "stack.hpp"
#include <algorithm>
#include <stdexcept>


Stack::Stack()
{
    currentSize = 0;
    maxSize = 5;
    stack = new int[maxSize];
}

Stack::Stack(const Stack &cpy)
{
    this->maxSize = cpy.maxSize;
    this->currentSize = cpy.currentSize;
    this->stack = new int [maxSize];
    std::copy(cpy.stack, cpy.stack + maxSize, this->stack);
}

Stack::~Stack()
{
     delete [] stack;
}

int Stack::getEle()
{
    if(currentSize > 1)
    {
        return stack[currentSize - 1];
    }
     else
    {
        throw std::out_of_range("Stack is empty. Cannot get element.");
    }
}

void Stack::deleteEle()
{
    if (currentSize > 0)
    {
        currentSize--;
    }
}

void Stack::addEle(int ele)
{
    stack[currentSize] = ele;
    currentSize++;
    
    if(currentSize == maxSize)
    {
        maxSize += 10;

        int* stackTmp{stack};
        stack = new int [maxSize];
        std::copy(stackTmp, stackTmp + maxSize - 10, stack);
    }
}

bool Stack::empty()
{
    return currentSize == 0 ? true : false;
}
