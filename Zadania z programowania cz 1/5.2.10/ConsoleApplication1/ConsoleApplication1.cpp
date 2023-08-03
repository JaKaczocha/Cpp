#include <iostream>

const char* const  cutOut(char string[], char banned[]);
const wchar_t* const cutOut(wchar_t stirng[], wchar_t banned[]);

int main()
{
    char str[]{ "ala ma kociceta i kota pies" };
    char letters[]{ "kocicet" };

    std::cout << cutOut(str, letters);
}

const char* const cutOut(char string[], char banned[])
{
    bool word = false;
    int j;
    for (int i = 0; string[i] != '\0'; i++)
    {
        
        if (string[i] == banned[0])
        {
            j = 0;
            for (; banned[j] != '\0'; j++)
            {
                if (string[i + j] == banned[j])
                {
                    word = true;
                    
                }
            }

            if (word)
            {
                for (int k = i; k < j + i; k++)
                {

                    string[k] = ' ';
                }
                return string;
            }
        }

    }
    
    return string;
}

const wchar_t* const cutOut(wchar_t string[], wchar_t banned[])
{
    bool word = false;
    int j;
    for (int i = 0; string[i] != L'\0'; i++)
    {

        if (string[i] == banned[0])
        {
            j = 0;
            for (; banned[j] != L'\0'; j++)
            {
                if (string[i + j] == banned[j])
                {
                    word = true;

                }
            }

            if (word)
            {
                for (int k = i; k < j + i; k++)
                {

                    string[k] = L' ';
                }
                return string;
            }
        }

    }

    return string;
}
