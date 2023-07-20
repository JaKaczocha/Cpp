#ifndef RECTANGLE_H
#define RECTANGLE_H


class Rectangle
{
public:
    Rectangle();
    Rectangle( float x0, float y0, float width, float height );

private:
    float x0, y0, height, width;

    friend bool Collision( float x0, float y0, Rectangle &Rectangle );
};

bool Collision( float x0, float y0, Rectangle &Rectangle );

#endif // RECTANGLE_H
