
// 5 and 29
#include <iostream>

int main()
{
    float a, b, c;
    std::cout << "enter the length of the sides of a tringle: ";
    std::cin >> a >> b >> c;

    if (a > b) {
        std::swap(a, b);
    }
    if (b > c) {
        std::swap(b, c);
    }
    if (c < a + b) {
        float area, p;
            
        p = (a + b + c) / 2;

        area = sqrt(p * (p - a) * (p - b) * (p - c) );

        std::cout << "area of triangele = " << area << std::endl;
        
    }

}

