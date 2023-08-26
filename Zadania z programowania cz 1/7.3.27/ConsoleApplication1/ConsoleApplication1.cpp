#include <iostream>
#include <exception>

struct element
{
    int i;
    element* next;
};

element* minL(element* List);
element* minHead(element* List);
element* findBefore(element* list, element* ele);
element* findBeforeHead(element* list, element* ele);

int main()
{

}

element* findBefore(element* list, element* ele)
{
    if (list == ele)
    {
        return nullptr;
    }
    while (list->next != nullptr)
    {
        if (list->next == ele)
        {
            return list;
        }
        list = list->next;
    }
    
}
element* findBeforeHead(element* list, element* ele)
{
    element* tmp{ list };
    list = list->next;
    if (list == ele)
    {
        return tmp;
    }
    while (list->next != nullptr)
    {
        if (list->next == ele)
        {
            return list;
        }
        list = list->next;
    }
}

element* minL(element* List)
{
    element* tmp{ List };
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
    return findBefore(tmp,ele);
}

element* minHead(element* List)
{
    element* tmp{ List };
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
    return findBefore(tmp, ele);
}
