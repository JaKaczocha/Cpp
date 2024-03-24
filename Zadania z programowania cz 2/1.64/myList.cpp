#include "myList.hpp"

myList::myList()
{
}

myList::myList(const myList & l)
{
    for (auto &&i : l.lis)
    {
        this->lis.push_back(i);
    } 
}

void myList::addToStart(size_t number)
{
    lis.push_front(number);
}

void myList::addToEnd(size_t number)
{
    lis.push_back(number);
}

void myList::delFirst()
{
    lis.pop_front();
}

void myList::delLast()
{
    lis.pop_back();
}

size_t myList::firstVal() const
{
    
    return lis.front();
    
}

size_t myList::lastVal() const
{
   
    return lis.back();
    
}

size_t myList::size() const
{
    return lis.size();
}

bool myList::isEmpty() const
{
    return lis.empty();
}

const std::list<size_t>& myList::getList() const
{
    return lis;
}
