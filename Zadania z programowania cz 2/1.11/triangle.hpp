#ifndef TRIANGLE_HPP
#define TRIANGLE_HPP

class triangle
{
private:
    /* data */
public:
    triangle(/* args */);
    ~triangle();

    void setBase(double base){this->base = base;};
    void setHeight(double height){this->height = height;};

    double getHeight(){return this->height;};
    double getBase(){return this->base;};

    double area() const {return base * height / 2.0;};

    double height, base;
};



#endif