#include <iostream>
#include <climits>
int main()
{
    char ASCIIarray[UCHAR_MAX];

    for (int i = 0; i < UCHAR_MAX; i++)
    {
        ASCIIarray[i] = i;
        std::cout << i << " ---> " << ASCIIarray[i] << std::endl;  
    }
    
}

