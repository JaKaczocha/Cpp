#include <iostream>

bool isPoliandrome(std::string str)
{
    for (uint64_t start{ 0 }, end{ str.size() - 1}; start < end; start++, end--)
    {
        if (str[start] != str[end])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    std::string str("kdajjak");
    std::cout << isPoliandrome(str);
}

