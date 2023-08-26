#include <iostream>

struct Triangle
{
    float sides[3];
    float area;
    Triangle* next;
};

void triangleArea(Triangle* list);
void triangleAreaHead(Triangle* list);
float calc(Triangle tri);

int main()
{
    Triangle* tri{ new Triangle};
    tri->sides[0] = 6.0f;
    tri->sides[2] = 2.0f;
    tri->sides[1] = 2.5f;
    tri->next = nullptr;
    triangleArea(tri);

    std::cout << tri->area;
}

inline float calc(Triangle tri)
{
    float semi{ (tri.sides[0] + tri.sides[1] + tri.sides[2]) / 2.0f };    
    return std::sqrt(semi * (semi - tri.sides[0]) * 
        (semi - tri.sides[1]) * (semi - tri.sides[2]));
}

void triangleArea(Triangle* list)
{
    while (list != nullptr)
    {
        list->area = calc(*list);
        list = list->next;
    }
}

void triangleAreaHead(Triangle* list)
{
    list = list->next;
    while (list != nullptr)
    {
        list->area = calc(*list);
        list = list->next;
    }
}