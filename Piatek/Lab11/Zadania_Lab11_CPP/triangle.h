#ifndef TRIANGLE_H
#define TRIANGLE_H


class Triangle
{
public:
    Triangle( float a, float b, float c);
    void print();
    float getField() const;

private:
    float a_, b_, c_, circuit_, field_;
    bool isTriangle_;
};



#endif // TRIANGLE_H
