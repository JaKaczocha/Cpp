#include <iostream>
#include <bitset>

struct flags
{
    bool first : 8;
    bool second : 8;
    bool third : 8;
    bool forth : 8;

};

union uintBits
{
    unsigned int number;
    flags f;
};
int main()
{
    uintBits bits;
    bits.number = 346;

    std::bitset<sizeof(unsigned int) * 8> y(bits.number);
    std::cout << y << '\n';
    std::cout << bits.f.first << '\n';
    std::cout << bits.f.second;
    
    
}
