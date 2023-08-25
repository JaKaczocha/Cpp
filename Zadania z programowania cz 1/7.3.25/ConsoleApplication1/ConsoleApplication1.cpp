#include <iostream>
#include <exception>

struct element
{
    int i;
    element* next;
};

int minL(element* List);
int minHead(element* List);

int main()
{

}

int minL(element* List)
{
    
    if (List == nullptr)
    {
        throw std::runtime_error("empty list");
    }

    int min{ List->i };
    while (List != nullptr)
    {
        if (List->i < min)
        {
            min = List->i;
        }
        List = List->next;
    }
    return min;
}

int minHead(element* List)
{
    List = List->next;
    if (List == nullptr)
    {
        throw std::runtime_error("empty list");
    }
    
    int min{ List->i };
    while (List != nullptr)
    {
        if(List->i < min)
        {
            min = List->i;
        }
        List = List->next;
    }
    return min;
}
