#ifndef SHAPE_HPP
#define SHAPE_HPP

struct Shape
{
    double circuit, area;  
};

struct Triangle : public Shape
{
    double side1, side2, side3;
};

struct Circle : public Shape
{
    double radius;
};

#endif