#include <iostream>
#include <string>
void powiększ(std::string &abc);

int main()
{
    std::string abc;
  
    while (true)
    {
        
        std::cout << "Podaj lancuch znakow ('q' aby wyjsc ):  ";
        getline(std::cin, abc);

        if (abc == "q")
        {
            break;
        }
        powiększ(abc);
        std::cout << abc << std::endl;
    } 

    std::cout << "Do widzenia";

}

void powiększ(std::string& abc)
{
    for (size_t i = 0; i < abc.size(); i++)
    {
        abc.at(i) = toupper(abc.at(i));
    }
}
