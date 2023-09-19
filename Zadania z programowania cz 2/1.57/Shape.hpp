#ifndef SHAPE_HPP
#define SHAPE_HPP

class Shape
{
public:
    double circuit, area;  
};

class Triangle : public Shape
{
public:
    double side1, side2, side3;
};

class Circle : public Shape
{
public:
    double radius;
};

#endif