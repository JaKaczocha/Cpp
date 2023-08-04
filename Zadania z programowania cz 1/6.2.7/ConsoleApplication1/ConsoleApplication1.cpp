#include <iostream>

int** createTriangularArray(int n);

int main()
{
    constexpr int size{ 10 };
    int** matrix = createTriangularArray(size);
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }


    for (int i = 0; i < size; i++)
    {
        delete[] matrix[i];
    }
    delete[] matrix;
}

int** createTriangularArray(int n)
{
    int** array{ new int* [n] {0} };

    for (int i = 0; i < n; i++)
    {
        array[i] = new int[n] {0};
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            array[i][j] = 1;
        }
    }
    return array;
}


