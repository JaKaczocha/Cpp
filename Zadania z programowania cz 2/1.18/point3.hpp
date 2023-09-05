#ifndef POINT3_HPP
#define POINT3_HPP

class point3
{
public:
    point3(/* args */);
    point3(double X, double Y,double Z);
    ~point3();

    void setX(double x){this->x = x;};
    void setY(double y){this->y = y;};
    void setZ(double z){this->z = z;};

    double getX() const {return this->x;};
    double getY() const {return this->y;};
    double getZ() const {return this->z;};

    void print() const;
    void cinput();

private:
    double x, y, z;
};




#endif