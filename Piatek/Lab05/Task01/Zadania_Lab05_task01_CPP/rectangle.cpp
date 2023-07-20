#include "rectangle.h"

Rectangle::Rectangle()
{

}

Rectangle::Rectangle( float x0, float y0, float width, float height ) :
    x0 ( x0 ), y0( y0 ), height( height ), width( width )
{

};


bool Collision( float x, float y, Rectangle &Rectangle )
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
