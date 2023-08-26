#include <iostream>

int main()
{
    constexpr int size{ 100 };
    size_t array[size];

    array[0] = 1;
    array[1] = 1;
    for (int i{ 2 }; i < size; i++)
    {
        array[i] = array[i - 1] + array[i - 2];
    }

    for (int i{ 0 }; i < size; i++)
    {
        std::cout << array[i] << "  ";
    }
}

