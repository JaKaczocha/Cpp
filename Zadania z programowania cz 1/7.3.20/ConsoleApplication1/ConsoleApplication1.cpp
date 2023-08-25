#include <iostream>

struct element
{
    int i;
    element* next;
};

void zero(element* List);
void zeroHead(element* List);

int main()
{

}

void zero(element* List)
{
    while (List != nullptr)
    {
        List->i = 0;
        List = List->next;
    }
    
}

void zeroHead(element* List)
{
    List = List->next;
    while (List != nullptr)
    {
        List->i = 0;
        List = List->next;
    }
}
