#include <iostream>

const wchar_t* const cutjtm(wchar_t str[],const wchar_t banned[]);
const char* const cutjtm(char str[], const char banned[]);

int main()
{
    std::cout << "Hello World!\n";
}

const wchar_t* const cutjtm(wchar_t str[], const wchar_t banned[])
{
    for (int i = 0; str[i] != L'\0' && banned[i] != L'\0'; i++)
    {
        if (str[i] == banned[i])
        {
            str[i] = L' ';
        }
    }
    return str;
}


const char* const cutjtm(char str[], const char banned[])
{
    for (int i = 0; str[i] != '\0' && banned[i] != '\0'; i++)
    {
        if (str[i] == banned[i])
        {
            str[i] = ' ';
        }
    }
    return str;
}





