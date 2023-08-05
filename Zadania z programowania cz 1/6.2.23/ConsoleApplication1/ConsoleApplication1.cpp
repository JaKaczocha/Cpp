#include <iostream>


void rowUP(int** array, int y, int x);


int main()
{
    constexpr int sizeF = 5, sizeS = 5;
    
    int** tmp = new int* [sizeF];
    for (int i = 0; i < sizeF; i++)
    {
        tmp[i] = new int[sizeS];
        for (int j = 0; j < sizeS; j++)
        {
            tmp[i][j] = i + j;
        }
    }
    for (int i = 0; i < sizeF; i++)
    {
        for (int j = 0; j < sizeS; j++)
        {
            std::cout << tmp[i][j] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
    rowUP(tmp, sizeF, sizeS);

    for (int i = 0; i < sizeF; i++)
    {
        for (int j = 0; j < sizeS; j++)
        {
            std::cout << tmp[i][j] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;

    for (int i = 0; i < sizeF; i++)
    {
        delete[] tmp[i];
    }
    delete[] tmp;

}

void rowUP(int** array, int y, int x)
{
    int** tmp = new int* [y];

    for (int i = 0; i < y; i++)
    {
        tmp[i] = new int[x];
    }

    for (int i = 1; i < y; i++)
    {
        for (int j = 0; j < x; j++)
        {
            tmp[i][j] = array[i - 1][j];
        }
    }
    for (int i = 0; i < x; i++)
    {
        tmp[0][i] = array[y - 1][i];
    }
    
    

    for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < x; j++)
        {
            array[i][j] = tmp[i][j];
        }
    }

    for (int i = 0; i < y; i++)
    {
        delete[] tmp[i];
    }
    delete[] tmp;
}
