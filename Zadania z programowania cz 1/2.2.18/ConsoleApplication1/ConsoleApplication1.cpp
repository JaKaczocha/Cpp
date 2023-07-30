#include <iostream>

inline float random();

int main()
{
    for (int i = 0; i < 15; i++)
    {
        std::cout << random() << std::endl;
    }
}

inline float random()
{
    static float ran{ 0.6 };
    
    return (ran = 1 - ran * ran);
}
