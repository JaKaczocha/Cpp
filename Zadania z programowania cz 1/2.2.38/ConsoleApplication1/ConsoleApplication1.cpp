#include <iostream>


template<typename N, typename M>
auto max(N first, M second)
{
    return first > second ? first : second;
}

int main()
{
    std::cout << max(555,6.8);
}

