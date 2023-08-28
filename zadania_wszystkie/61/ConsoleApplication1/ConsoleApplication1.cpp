#include <iostream>
#include <limits>
int main()
{
    float number{ 0.0f }, sum{ 0.0f };
    float max{std::numeric_limits<float>::min()}, min{ std::numeric_limits<float>::max() };
    int count{ 0 };
    std::cout << "enter numbers: ";

    while (1)
    {
        std::cin >> number;

        if (number == 0.0f)
        {
            break;
        }
        count++;
        if (number > max)
        {
            max = number;
        }
        else if (number < min)
        {
            min = number;
        }
        sum += number;
    }
    float average{ sum / count };
    std::cout << "min: " << min << "\nmax: " << max << "\naverage: " << average;
}
