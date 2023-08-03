#include <iostream>

wchar_t* cut(wchar_t str[], const unsigned int n,const unsigned int m);
char* cut(char str[], const unsigned int n, const unsigned int m);

int main()
{
    std::cout << "Hello World!\n";
}

wchar_t* cut(wchar_t str[], int n, int m)
{
    for (int i = n; str[i] != L'\0' && i <= m; i++)
    {
        str[i] = L' ';
    }

    return str;
}

char* cut(char str[], int n, int m)
{
    for (int i = n; str[i] != '\0' && i <= m; i++)
    {
        str[i] = ' ';
    }

    return str;
}



