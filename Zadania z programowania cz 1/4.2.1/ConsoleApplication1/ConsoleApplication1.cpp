#include <iostream>

void setZero(int array[], unsigned int size);
void setIndexValue(int array[], unsigned int size);
void setAbsValue(int array[], unsigned int size);
void setDoubleValue(int array[], unsigned int size);

int main()
{
    std::cout << "Hello World!\n";
}

void setZero(int array[], unsigned int size)
{
    for (int i = 0; i < size; i++)
    {
        array[i] = 0;
    }
}
void setIndexValue(int array[], unsigned int size)
{
    for (int i = 0; i < size; i++)
    {
        array[i] = i;
    }
}
void setAbsValue(int array[], unsigned int size)
{
    for (int i = 0; i < size; i++)
    {
        array[i] = std::abs(array[i]);
    }
}
void setDoubleValue(int array[], unsigned int size)
{
    for (int i = 0; i < size; i++)
    {
        array[i] = array[i] * 2;
    }
}

