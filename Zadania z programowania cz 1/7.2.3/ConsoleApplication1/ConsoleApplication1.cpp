#include <iostream>

struct point
{
    float x, y, z;
};

float distanceMin(const point array[], const int size);
inline float distFormula3D(const point* const p1, const point* const p2);

int main()
{
    constexpr int size{ 5 };
    point array[size]{  {5,3,1},{6,4,8}, {10,2,1}, {6,6,6},{4,4,4} };

    std::cout << distanceMin(array, size);
    
}

float distanceMin(const point array[], const int size)
{
    float distanceMin{ distFormula3D(&array[0],&array[1])}, tmp;

    for (int i{ 0 }; i < size - 1; i++)
    {
        for (int j {i + 1}; j < size; j++)
        {

            tmp = distFormula3D(&array[i], &array[j]);
            if (tmp < distanceMin)
            {
                distanceMin = tmp;
                
            }
        }
    }

    return distanceMin;
}

inline float distFormula3D(const point* const p1, const point* const p2)
{
    return sqrt((p1->x - p2->x) * (p1->x - p2->x) +
        (p1->y - p2->y) * (p1->y - p2->y) +
        (p1->z - p2->z) * (p1->z - p2->z));
}

