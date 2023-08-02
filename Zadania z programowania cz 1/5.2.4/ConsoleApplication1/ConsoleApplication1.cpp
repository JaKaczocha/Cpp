#include <iostream>

bool desc(const char str1[], const char str2[]);

int main()
{
    char koala[]{ 'a','a','r','e','k','\0'};
    char koala2[]{ 'a','a','a','e','k','\0'};
    
    std::cout << desc(koala, koala2);
}

bool desc(const char str1[], const char str2[])
{
    for (int i = 0; true; i++)
    {
        if (str1[i] == '\0' || str2[i] == '\0')
        {
            if (str1[i] == '\0' && str2[i] == '\0' || str1[i] == '\0')
            {
                return false;
            }
            else if (str2[i] == '\0')
            {
                return true;
            }
        }
        else if (str1[i] > str2[i])
        {
            return true;
        }
        else if (str1[i] < str2[i])
        {
            return false;
        }
    }
}

