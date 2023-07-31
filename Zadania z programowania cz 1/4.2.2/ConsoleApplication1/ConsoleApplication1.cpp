#include <iostream>

float mean(int array[], unsigned int size);
int sum(int array[], unsigned int size);
int squereSum(int array[], unsigned int size);


int main()
{
    std::cout << "Hello World!\n";
}


float mean(int array[], unsigned int size)
{
    int mean{ sum(array,size) };
    
    return mean / static_cast<float>(size);
}
int sum(int array[], unsigned int size)
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
int squereSum(int array[], unsigned int size)
{
    {
        int sum{ 0 };
        for (int i = 0; i < size; i++)
        {
            sum += array[i] * array[i];
        }
        return sum;
    }
}

