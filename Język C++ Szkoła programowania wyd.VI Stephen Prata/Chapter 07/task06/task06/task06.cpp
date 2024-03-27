#include <iostream>

int fill_array(double [], int);
void show_array(double[], int);
void reverse_array(double[], int);

int main()
{
    const int SIZE = 10;
    double array[SIZE];
    int size = fill_array(array, SIZE);
    show_array(array, size);
    reverse_array(array, size);
    show_array(array, size);

}


int fill_array(double array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << "Podaj liczbe: ";
        std::cin >> array[i];
        if (!std::cin.good())
        {
            array[i] = 0;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            return i;
        }
    }
}

void show_array(double array[], int size)
{
    std::cout << "ARRAY: ";
    for (int i = 0; i < size; i++)
    {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

void reverse_array(double array[], int size)
{
    for (int i = 0, j = size - 1; i < size / 2; i++, j--)
    {
        std::swap(array[i],array[j]);
    }
}
