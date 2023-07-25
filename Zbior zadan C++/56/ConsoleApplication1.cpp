#include <iostream>


int sumEvenIndices(int** array, int sizeF, int sizeS);

int main()
{
    constexpr int sizeF{ 6 }, sizeS{ 3 };

    int** array{ new int* [sizeF] };
    for (int i = 0; i < sizeF; i++)
    {
        array[i] = new int[sizeS];
        for (int j = 0; j < sizeS; j++)
        {
            array[i][j] = i + j * 2;
        }
    }

    std::cout << "sum:  " << sumEvenIndices(array, sizeF, sizeS);

}

int  sumEvenIndices(int** array, int sizeF, int sizeS)
{
    int sum{ 0 };
    for (int i = 0; i < sizeF; i++)
    {
        for (int j = 0; j < sizeS; j++)
        {
            if ((i + j) % 2 == 0)
            {
                sum += array[i][j];
            }
        }
    }

    return sum;
}

