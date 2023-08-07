#include <iostream>

struct triangle
{
    float side[3];
};

float circuitOfTriangle(const triangle* const tri);
void copy(const triangle* const src, triangle* const dest);

int main()
{
    triangle tang{ 3,5,3 };
    triangle tangCopy;

    copy(&tang, &tangCopy);
    std::cout << circuitOfTriangle(&tangCopy);
}

float circuitOfTriangle(const triangle* const tri)
{
    return tri->side[0] + tri->side[1] + tri->side[2];
}
void copy(const triangle* const src, triangle* const dest)
{
    dest->side[0] = src->side[0];
    dest->side[1] = src->side[1];
    dest->side[2] = src->side[2];
}
