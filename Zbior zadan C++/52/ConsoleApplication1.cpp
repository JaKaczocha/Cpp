#include <iostream>

unsigned int modal(int array[], const int size);

int main()
{
    constexpr int size = 15;

    int array[size]{ 5,4,7,4,7  ,9,4,7,1,2   ,4,2,1,2,8 };

    unsigned int modalNum = modal(array, size);

    std::cout << "modal: " << modalNum;
    
}

unsigned int modal(int array[], const int size)
{
    int max = -1, i = 0, modal,tmp;

    for (int i = 0,count = 0; i < size; i++, count = 0)
    {
        while (array[i] == -1)
        {
            i++;
        }

        tmp = array[i];
        for (int j = 0; j < size && i < size; j++)
        {
            if (tmp == array[j])
            {
                count++;
                array[j] = -1;
            }
            std::cout << array[i] << " " << array[j] << std::endl;
        }
        if (count > max)
        {
            max = count;
            modal = tmp;
        }
        
        
    }
    
    return modal;
}

