
#include <iostream>

void f();

int main()
{
    for (int i = 0; i < 100; i++)
    {
        f();
    }
}


void f()
{
    static int i = 0;
    i++;
    if (i % 12 == 0)
        std::cout << "Nowy tuzin :] \n";
}