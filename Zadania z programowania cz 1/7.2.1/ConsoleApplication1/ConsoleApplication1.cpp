#include <iostream>

struct triangle
{
    float side[3];
};

float circuitOfTriangle(const triangle* const tri);

int main()
{
    triangle tang{ 3,5,3 };
    
    std::cout << circuitOfTriangle(&tang);
}

float circuitOfTriangle(const triangle* const tri)
{
    return tri->side[0] + tri->side[1] + tri->side[2];
}
