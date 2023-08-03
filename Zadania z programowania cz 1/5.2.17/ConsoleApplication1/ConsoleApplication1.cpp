#include <iostream>
#include <string>

std::string& scan(std::string& array);
std::wstring& scan(std::wstring& array);

int main()
{
    std::cout << "enter word: ";
    std::wstring abc;
    std::wstring k{ scan(abc) };
    
    k.append(abc);
    std::wcout << abc;



}

std::string& scan(std::string& array)
{
    std::cin >> array;
    return array;
}

std::wstring& scan(std::wstring& array)
{
    std::wcin >> array;
    return array;
}


