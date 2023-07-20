#ifndef POINT_H
#define POINT_H

#include <rectangle.h>

class Point
{
public:
    Point();
    Point( int x, int y);

    bool Collision( Rectangle &Rectangle);

private:
    float x, y;
};

#endif // POINT_H
