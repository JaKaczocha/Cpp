#include <iostream>

double geoMean(unsigned int size, unsigned int array[]);

int main()
{
    
}

double geoMean(unsigned int size, unsigned int array[])
{
    int product = array[0];
    for (int i = 1; i < size; i++)
    {
        if (array[i] == 0)
        {
            return 0;
        }
        product *= array[i];
    }

    return std::pow(product,1.0/size) ;
}



