#include <iostream>

int* sumVec(const unsigned int size, const int* const vec1, const int* const vec2);

int main()
{
    int vec1[]{ 1,6 };
    int vec2[]{ 6,5 };

    int* sum{ sumVec(2, vec1, vec2) };

    std::cout << sum[0] << "   " << sum[1];
}

int* sumVec(const unsigned int size, const int* const vec1, const int* const vec2)
{
    int* sum{ new int[size] };
    for (int i = 0; i < size; i++)
    {
        sum[i] = vec1[i] + vec2[i];
    }

    return sum;
}


