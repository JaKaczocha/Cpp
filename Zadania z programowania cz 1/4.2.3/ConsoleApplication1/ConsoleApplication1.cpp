#include <iostream>

float mean(const int array[], unsigned int size);
int sum(const int array[], unsigned int size);



int main()
{
    const int array[4]{ 3,5,7,8 };

    std::cout << mean(array, 4);
}


float mean(const int array[], unsigned int size)
{
    int mean{ sum(array,size) };
    
    return mean / static_cast<float>(size);
}
int sum(const int array[], unsigned int size)
{
    {
        int sum{ 0 };
        for (int i = 0; i < size; i++)
        {
            sum += array[i];
        }
        return sum;
    }
}
