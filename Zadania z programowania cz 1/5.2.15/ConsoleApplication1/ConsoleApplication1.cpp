#include <iostream>

void print(std::string quote);
void print(std::wstring quote);

int main()
{
    std::wstring abc{ L"kaska" };
    print(abc);
}

void print(std::string quote)
{
    std::cout << quote;
}
void print(std::wstring quote)
{
    std::wcout << quote;
}


