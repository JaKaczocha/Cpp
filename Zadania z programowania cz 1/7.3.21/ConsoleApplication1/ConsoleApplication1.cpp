#include <iostream>

struct element
{
    int i;
    element* next;
};

void abso(element* List);
void absoHead(element* List);

int main()
{

}

void abso(element* List)
{
    while (List != nullptr)
    {
        List->i = List->i > 0 ? List->i : -List->i;
        List = List->next;
    }

}

void absoHead(element* List)
{
    List = List->next;
    while (List != nullptr)
    {
        List->i = List->i > 0 ? List->i : -List->i;
        List = List->next;
    }
}
