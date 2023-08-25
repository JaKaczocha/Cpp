#include <iostream>
#include <exception>

struct element
{
    int i;
    element* next;
};

element* minL(element* List);
element*  minHead(element* List);

int main()
{

}

element* minL(element* List)
{

    if (List == nullptr)
    {
        throw std::runtime_error("empty list");
    }
    element* ele{ List };
    int min{ List->i };
    while (List != nullptr)
    {
        if (List->i < min)
        {
            min = List->i;
            ele = List;
        }
        List = List->next;
    }
    return ele;
}

element* minHead(element* List)
{
    List = List->next;
    if (List == nullptr)
    {
        throw std::runtime_error("empty list");
    }
    element* ele{ List };
    int min{ List->i };
    while (List != nullptr)
    {
        if (List->i < min)
        {
            min = List->i;
            ele = List;
        }
        List = List->next;
    }
    return ele;
}
