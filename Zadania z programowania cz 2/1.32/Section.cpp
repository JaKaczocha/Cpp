#include "Section.hpp"
#include <iostream>
#include <cmath>

Section::Section(/* args */)
{
}

Section::~Section()
{
}

void Section::enterCoordinates()
{
    std::cout << "enter x1: ";
    std::cin >> x1;
    std::cout << "enter y1: ";
    std::cin >> y1;

    std::cout << "enter x2: ";
    std::cin >> x2;
    std::cout << "enter y2: ";
    std::cin >> y2;
}

bool Section::intersect(const Section& s) const
{
    // Check for the orientation of three points to see if they are collinear
    auto orientation = [](double x1, double y1, double x2, double y2, double x3, double y3) -> int {
        double val = (y2 - y1) * (x3 - x2) - (x2 - x1) * (y3 - y2);
        if (val == 0) return 0;  // Collinear
        return (val > 0) ? 1 : 2; // Clockwise or counterclockwise
    };

    int o1 = orientation(x1, y1, x2, y2, s.x1, s.y1);
    int o2 = orientation(x1, y1, x2, y2, s.x2, s.y2);
    int o3 = orientation(s.x1, s.y1, s.x2, s.y2, x1, y1);
    int o4 = orientation(s.x1, s.y1, s.x2, s.y2, x2, y2);

    // General case: Check for intersection
    if (o1 != o2 && o3 != o4) {
        return true; // Intersect
    }

    // Special cases where endpoints of one segment lie on the other segment
    if (o1 == 0 && s.x1 >= std::min(x1, x2) && s.x1 <= std::max(x1, x2) && s.y1 >= std::min(y1, y2) && s.y1 <= std::max(y1, y2))
        return true; // Intersect
    if (o2 == 0 && s.x2 >= std::min(x1, x2) && s.x2 <= std::max(x1, x2) && s.y2 >= std::min(y1, y2) && s.y2 <= std::max(y1, y2))
        return true; // Intersect
    if (o3 == 0 && x1 >= std::min(s.x1, s.x2) && x1 <= std::max(s.x1, s.x2) && y1 >= std::min(s.y1, s.y2) && y1 <= std::max(s.y1, s.y2))
        return true; // Intersect
    if (o4 == 0 && x2 >= std::min(s.x1, s.x2) && x2 <= std::max(s.x1, s.x2) && y2 >= std::min(s.y1, s.y2) && y2 <= std::max(s.y1, s.y2))
        return true; // Intersect

    return false; // No intersection
}

double leng(Section s)
{
    double x = std::abs(s.x1 - s.x2);
    double y = std::abs(s.y1 - s.y2);
    double len = std::sqrt(x * x + y * y);
    return len;
}
