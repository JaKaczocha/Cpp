#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>
int main()
{
    float r, h;
    float sphereArea, cylinderArea,coneArea, sphereVolume,
        cylinderVolume, coneVolume;
    
    std::cout << "enter r: ";
    std::cin >> r;
    std::cout << "enter h: ";
    std::cin >> h;

    sphereVolume = (static_cast<float>(4) / 3) * M_PI * r * r * r;
    sphereArea = 4 * M_PI * r * r;

    std::cout << "sphere area: " << sphereArea << std::endl;
    std::cout << "sphere volume: " << sphereVolume << std::endl;

    coneVolume = (1 / static_cast<float>(3)) * M_PI * r * r * h;
    float l = sqrt(r * r + h * h);
    coneArea = M_PI * r * r + M_PI * r + l;

    std::cout << "cone area: " << coneArea << std::endl;
    std::cout << "cone volume: " << coneVolume << std::endl;

    cylinderVolume = M_PI * r * r * h;
    cylinderArea = 2 * M_PI * r * (r + h);

    std::cout << "cylinder area: " << cylinderArea << std::endl;
    std::cout << "cylinder volume: " << cylinderVolume << std::endl;


    

}

