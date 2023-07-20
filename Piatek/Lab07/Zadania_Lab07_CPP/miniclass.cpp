#include "miniclass.h"

MiniClass::MiniClass()
{

}

void MiniClass::setX( float x )
{
    this->x_ = x;
}
void MiniClass::setY( float y )
{
    this->y_ = y;
}
float MiniClass::getX()
{
    return x_;
}
float MiniClass::getY()
{
    return y_;
}
