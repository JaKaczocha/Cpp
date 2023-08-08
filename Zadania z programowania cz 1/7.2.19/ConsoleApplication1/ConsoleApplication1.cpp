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
    flags f;
    unsigned int number;
};

unsigned int something(unsigned int number1, unsigned int number2);

int main()
{
    uintBits bits, bits2;
    bits.number = 346;
    bits2.number = 1236;
    std::cout << something(bits.number, bits2.number);


}

unsigned int something(unsigned int number1, unsigned int number2)
{
    uintBits product, ele1, ele2;
    ele1.number = number1;
    ele2.number = number2;
    product.f.first = (ele1.f.first * ele2.f.first) % 256;
    product.f.second = (ele1.f.second * ele2.f.second) % 256;
    product.f.third = (ele1.f.third * ele2.f.third) % 256;
    product.f.forth = (ele1.f.forth * ele2.f.forth) % 256;

    return product.number;
}
