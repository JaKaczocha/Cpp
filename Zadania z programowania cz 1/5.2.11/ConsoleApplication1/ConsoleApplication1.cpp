#include <iostream>

const char* const  cutLetters(char string[], char banned[]);
const wchar_t* const cutLetters(wchar_t stirng[], wchar_t banned[]);

int main()
{
    char str[]{ "lambda biline" };
    char letters[]{ "kica lis" };

    std::cout << cutLetters(str, letters);
}

const char* const cutLetters(char string[], char banned[])
{
    for (int i = 0; string[i] != '\0'; i++)
    {
        for (int j = 0; banned[j] != '\0'; j++)
        {
            if (string[i] == banned[j])
            {
                string[i] = ' ';
            }
        }
    }

    return string;
}

const wchar_t* const cutLetters(wchar_t string[], wchar_t banned[])
{
    for (int i = 0; string[i] != L'\0'; i++)
    {
        for (int j = 0; banned[j] != L'\0'; j++)
        {
            if (string[i] == banned[j])
            {
                string[i] = L' ';
            }
        }
    }

    return string;
}
