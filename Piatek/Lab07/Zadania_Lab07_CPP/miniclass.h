#ifndef MINICLASS_H
#define MINICLASS_H


class MiniClass
{
public:
    MiniClass();

    void setX( float x );
    void setY( float y );
    float getX();
    float getY();


private:
    float x_, y_;
};

#endif // MINICLASS_H
