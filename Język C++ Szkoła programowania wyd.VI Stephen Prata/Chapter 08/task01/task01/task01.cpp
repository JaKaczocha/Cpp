#include <iostream>

void show(const char* array, int number = 0);

int main()
{
    show("array1");

    show("array2");

    show("array", 2);
     
    show("po", 4);
    show("jakub");
}


void show(const char* array, int number)
{
    static int counter = 0;

    counter++;
    std::cout << array << std::endl;

    if (number != 0)
    {
        for (int i = 1; i < counter; i++)
        {
            std::cout << array << std::endl;
        }
    }
}

