#include <iostream>
#include <string>


int main()
{
    std::cout << R"(give words when you are done enter "done" )" << "\n";

    std::string words;
    int sum = 0;

    while (  words != "done"  )
    {
        std::cin >> words;
        sum ++;
    }
    sum--;
    std::cout << "u give " << sum << " words." << std::endl;


    return 0;
}
