#include <iostream>
#include <cmath>

struct Triangle
{
    float sides[3];
    Triangle* next;
};

bool isPythagorean(Triangle tri);
Triangle* pythagoreanTriangle(Triangle* list, bool (*fun)(Triangle) = isPythagorean);
void pythagoreanTriangleHead(Triangle* list, bool (*fun)(Triangle) = isPythagorean);

int main()
{

    
}

bool isPythagorean(Triangle tri)
{
    if (tri.sides[0] >= tri.sides[1] && tri.sides[0] >= tri.sides[2] &&
        tri.sides[0] * tri.sides[0] == tri.sides[1] * tri.sides[1] + tri.sides[2] * tri.sides[2])
    {
        return true;
    }
    else if(tri.sides[1] >= tri.sides[0] && tri.sides[1] >= tri.sides[2] &&
        tri.sides[1] * tri.sides[1] == tri.sides[0] * tri.sides[0] + tri.sides[2] * tri.sides[2])
    {
        return true;
    }
    else if(tri.sides[2] * tri.sides[2] == tri.sides[0] * tri.sides[0] + tri.sides[1] * tri.sides[1])
    {
        return true;
    }
    return false;
}

Triangle* pythagoreanTriangle(Triangle* list, bool (*fun)(Triangle))
{
    Triangle* tmp{nullptr},* tmp2{nullptr};

    if (fun(*list))
    {
        if (tmp2 == nullptr)
        {
            tmp2 = tmp;
        }
        tmp = list;
        tmp = tmp->next;

    }
    while (list->next != nullptr)
    {
        if (fun(*list->next))
        {
            if (tmp2 == nullptr)
            {
                tmp2 = tmp;
            }
            tmp = list->next;
            tmp = tmp->next;
        }
        list = list->next;
    }
    tmp->next = nullptr;

    return tmp2;
}
void pythagoreanTriangleHead(Triangle* list, bool (*fun)(Triangle))
{

    while (list->next != nullptr)
    {
        if (fun(*list->next) == false)
        {
            if (list->next->next == nullptr)
            {
                delete list->next;
                list->next = nullptr;
            }
            else
            {
                Triangle* tmp{list->next};
                list->next = list->next->next;
                delete tmp;
            }
        }
        list = list->next;
    }
}




