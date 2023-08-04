#include <iostream>

std::string glue(std::string first, std::string second, std::string third);
std::wstring glue(std::wstring first, std::wstring second, std::wstring third);

int main()
{
    std::cout << glue("ala ", "ma ktoki", " k a t arzyna") << std::endl;
    std::wcout << glue(L"LAKTOZA", L" cow ", L"monkey");
}


std::string glue(std::string first, std::string second, std::string third)
{
    return first + second + third;
}

std::wstring glue(std::wstring first, std::wstring second, std::wstring third)
{
    return first + second + third;
}
