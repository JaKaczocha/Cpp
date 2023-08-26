#include <iostream>
#include <cmath>

struct Element
{
    int i;
    Element* next;
};

size_t maxDiff(Element* list);
size_t maxDiffHead(Element* list);

int main()
{
    std::cout << "Hello World!\n";
}

size_t maxDiff(Element* list)
{
    if (list == nullptr)
    {
        return 0;
    }

    int max{ list->i }, min{ list->i };
 
    list = list->next;
    while (list != nullptr)
    {
        if (list->i > max)
        {
            max = list->i;
        }
        else if (list->i < min)
        {
            min = list->i;
        }
        list = list->next;
    }

    return std::abs(min) + std::abs(max);
}
size_t maxDiffHead(Element* list)
{
    list = list->next;
    if (list == nullptr)
    {
        return 0;
    }

    int max{ list->i }, min{ list->i };

    list = list->next;
    while (list != nullptr)
    {
        if (list->i > max)
        {
            max = list->i;
        }
        else if (list->i < min)
        {
            min = list->i;
        }
        list = list->next;
    }

    return std::abs(min) + std::abs(max);
}
//max diff 