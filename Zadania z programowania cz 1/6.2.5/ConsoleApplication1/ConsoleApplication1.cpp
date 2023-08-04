#include <iostream>

int*** createTab(const unsigned int n, const unsigned int m, const unsigned k);
void destroy3D(int*** arr, const unsigned int n, const unsigned m);

int main()
{
    
    destroy3D(createTab(5, 12, 6) , 5,12);

}

void destroy3D(int*** arr, const unsigned int n,const unsigned int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            delete[] arr[i][j];
        }
        delete arr[i];
    }
    delete[] arr;
}

int*** createTab(const unsigned int n, const unsigned int m, const unsigned k)
{
    int*** array{ new int** [n] };
    for (int i = 0; i < n; i++)
    {
        array[i] = new int*[m];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            array[i][j] = new int[k];
        }
    }
    return array;
}



