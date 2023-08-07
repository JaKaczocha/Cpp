#include <iostream>

struct point
{
    float x, y, z;
};

void copy(const point src[], point dest[], const unsigned int size);

int main()
{
    constexpr int size{ 5 };
    point array[size]{ {5,3,1},{6,4,8}, {10,2,1}, {6,6,6},{4,4,4} };
    point array2[size];
    
    copy(array, array2,size);

    array[2].x = 66;
    std::cout << array2[2].x << "  ";
    std::cout << array[2].x;


}

void copy(const point src[], point dest[], const unsigned int size)
{
    for (int i{ 0 }; i < size; i++)
    {
        dest[i] = src[i];
    }
}

