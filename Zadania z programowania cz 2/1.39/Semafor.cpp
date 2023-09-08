#include "Semafor.hpp"

Semafor::Semafor() : status(0), max(2)
{

}
Semafor::Semafor(unsigned int maxBorder) : status(0), max(maxBorder)
{

}

bool Semafor::book()
{
    if(status < max - 1)
    {
        status++;
        return true;
    }
    return false;
}

bool Semafor::free()
{
    if(status > 0)
    {
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
