#include <iostream>

char* upperCase(char arr[]);

int main()
{
    char array[]{ "karamba" };

    std::cout << upperCase(array);
}

char* upperCase(char arr[])
{
    for (int i = 0; arr[i] != '\0'; i++)
    {
        if (arr[i] >= 97 && arr[i] <= 122)
        {
            arr[i] -= 32;
        }
    }

    return arr;
}

