#include "SemaforBin.hpp"

SemaforBin::SemaforBin(/* args */)
{
}

SemaforBin::~SemaforBin()
{
}


void SemaforBin::book()
{
    isFree = false;
}
void SemaforBin::free()
{
    isFree = true;
}