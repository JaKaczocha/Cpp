#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>


int main()
{

    char i = '4';

    float Area, Volume;


    while (true) {
        std::cout << "enter 1 for sphere, 2 for cone, 3 for cylinder, q to ESC: ";
        std::cin >> i;
        std::cout << "i : " << i;
        if (i == '1') {
            float r;
            std::cout << "enter r: ";
            std::cin >> r;

            Volume = (static_cast<float>(4) / 3) * M_PI * r * r * r;
            Area = 4 * M_PI * r * r;

            std::cout << "sphere area: " << Area << std::endl;
            std::cout << "sphere volume: " << Volume << std::endl;
        }
        else if (i == '2') {
            float r, h;
            std::cout << "enter r: ";
            std::cin >> r;
            std::cout << "enter h: ";
            std::cin >> h;

            Volume = (1 / static_cast<float>(3)) * M_PI * r * r * h;
            float l = sqrt(r * r + h * h);
            Area = M_PI * r * r + M_PI * r + l;

            std::cout << "cone area: " << Area << std::endl;
            std::cout << "cone volume: " << Volume << std::endl;
        }
        else if (i == '3') {
            float r, h;
            std::cout << "enter r: ";
            std::cin >> r;
            std::cout << "enter h: ";
            std::cin >> h;

            Volume = M_PI * r * r * h;
            Area = 2 * M_PI * r * (r + h);

            std::cout << "cylinder area: " << Area << std::endl;
            std::cout << "cylinder volume: " << Volume << std::endl;
        }
        else if (i == 'q') {
            std::cout << "END";
            break;
        }
    }
    


}

