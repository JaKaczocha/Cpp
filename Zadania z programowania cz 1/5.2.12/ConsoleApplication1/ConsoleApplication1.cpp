#include <iostream>


char* cutzn(char string[], char letters[]);
wchar_t* cutzn(wchar_t string[], wchar_t letters[]);

int main()
{
    std::cout << "Hello World!\n";
}

char* cutzn(char string[], char letters[])
{
    bool ok = false;
    for (int i = 0; string[i] != '\0'; i++, ok = false)
    {
        for (int j = 0; letters[j] != '\0'; j++)
        {
            if (string[i] == letters[j])
            {
                ok = true;
                break;
            }
        }
        if (!ok)
        {
            string[i] = ' ';
        }
    }
    return string;
}

wchar_t* cutzn(wchar_t string[], wchar_t letters[])
{
    bool ok = false;
    for (int i = 0; string[i] != L'\0'; i++, ok = false)
    {
        for (int j = 0; letters[j] != L'\0'; j++)
        {
            if (string[i] == letters[j])
            {
                ok = true;
                break;
            }
        }
        if (!ok)
        {
            string[i] = ' ';
        }
    }
    return string;
}
