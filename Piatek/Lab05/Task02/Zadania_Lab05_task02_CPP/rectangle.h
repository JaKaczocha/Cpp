#ifndef RECTANGLE_H
#define RECTANGLE_H

class Point;

class Rectangle
{
public:
    Rectangle();
    Rectangle( float x0, float y0, float width, float height );

private:
    float x0, y0, height, width;

    friend Point;
};



#endif // RECTANGLE_H
