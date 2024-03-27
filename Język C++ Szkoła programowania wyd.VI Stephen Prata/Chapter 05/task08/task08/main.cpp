#include <iostream>
#include <cstring>

int main()
{
    std::cout << R"(give words when you are done enter "done" )" << "\n";

    char words[ 20 ];
    int sum = 0;

    while ( strcmp( words, "done" ) )
    {
        std::cin >> words;
        sum ++;
    }
    sum--;
    std::cout << "u give " << sum << " words." << std::endl;

    return 0;
}
