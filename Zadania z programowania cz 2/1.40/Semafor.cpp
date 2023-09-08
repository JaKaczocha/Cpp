#include "Semafor.hpp"

#include <algorithm>
#include <iostream>

Semafor::Semafor() : status(0), max(2)
{

}
Semafor::Semafor(unsigned int maxBorder) : status(0), max(maxBorder)
{

}
Semafor::~Semafor()
{

}

bool Semafor::book(int id)
{
    if(status < max - 1)
    { 
        IDs.push_back(id);
        status++;
        return true;
    }
    return false;
}

bool Semafor::free(int id)
{
    
    if(status > 0)
    {
        IDs.erase(std::remove(IDs.begin(), IDs.end(), id), IDs.end()); //delete from vec by id
        status--;
        return true;
    }
    return false;
}

bool Semafor::state() const
{
    if(status == max - 1)
    {
        return true;
    }
    return false;
}

void Semafor::printReservation() const
{
    for (auto &&i : IDs)
    {
        std::cout << i << "   ";
    }
    
}
