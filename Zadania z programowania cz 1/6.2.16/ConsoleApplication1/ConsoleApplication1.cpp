#include <iostream>

int maxMeanIndex(int** array, int y, int x);

int main()
{
    constexpr int size{ 9 }; 
    int** array{ new int* [size] };
    for (int i = 0; i < size; i++)
    {
        array[i] = new int[6];
        for (int j = 0; j < 6; j++)
        {
            array[i][j] = i * 3 + j * 2 + i * i ;
            
        }
    }

    for (int i = 0; i < 6; i++)
    {
        array[3][i] += 100;
    }

    std::cout << maxMeanIndex(array, size, 6);

    for (int i = 0; i < size; i++)
    {
        delete[] array[i];
    }
    delete[] array;
}

int maxMeanIndex(int** array, int y, int x)
{
    long double max{ 0 };
    int index = 0;
    for (int i = 0; i < x; i++)
    {
        max += array[0][i];
    }
    
    for (int i = 1, mean = 0; i < y; i++ )
    {
        mean = 0;
        for (int j = 0; j < x; j++)
        {
            mean += array[i][j];
        }
        if (mean > max)
        {
            max = mean;
            index = i;
        }        
    }
     
    return index;
}


