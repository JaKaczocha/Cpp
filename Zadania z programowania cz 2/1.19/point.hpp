#ifndef POINT_HPP
#define POINT_HPP

class point
{
public:
    point(/* args */);
    point(double X, double Y);
    ~point();

    void setX(double x){this->x = x;};
    void setY(double y){this->y = y;};

    double getX(){return this->x;};
    double getY(){return this->y;};

    void print() const;
    void cinput();

private:
    double x,y;
};




#endif