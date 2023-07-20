#include "point.h"

Point::Point()
{

}

Point::Point( int x, int y ) : x( x ), y( y )
{

}

bool Point::Collision( Rectangle &Rectangle )
{
    if( x > Rectangle.x0 + Rectangle.width || x < Rectangle.x0 )
    {
        return 0;
    }
    else if( y > Rectangle.y0 + Rectangle.height || y < Rectangle.y0 )
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
