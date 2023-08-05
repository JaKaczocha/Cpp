#include <iostream>


void colUP(int** array,const unsigned int y,const unsigned int x);


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
    colUP(tmp, sizeF, sizeS);

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

void colUP(int** array, const unsigned int y, const unsigned int x)
{
    int** tmp = new int* [y];

    for (int i = 0; i < y; i++)
    {
        tmp[i] = new int[x];
    }

    for (int i = 0; i < y; i++)
    {
        for (int j = 1; j < x; j++)
        {
            tmp[i][j] = array[i][j - 1];
        }
    }
    for (int i = 0; i < y; i++)
    {
        tmp[i][0] = array[i][x - 1];
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
