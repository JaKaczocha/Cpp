#include <iostream>

void upLetters(std::string& str);
void upLetters(std::wstring& str);
int main()
{
    std::string abc("kaczocha");
    upLetters(abc);
    std::cout << abc;
}

void upLetters(std::wstring& str)
{
    for (int i = 0; i < str.length(); i++)
    {
        str[i] = std::toupper(str[i]);
    }
}

void upLetters(std::string& str)
{
    for (int i = 0; i < str.length(); i++)
    {
        str[i] = std::toupper(str[i]);
    }
}
