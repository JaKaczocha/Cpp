#include <iostream>

enum class figureType
{
    triangle, rectangle,
    parallelogram, trapezoid
};

struct figure
{
    figureType type;
    double base1, base2, height;
};

double area(const figure* const fig);

int main()
{
    std::cout << "Hello World!\n";
}

double area(const figure* const fig)
{
   switch (fig->type)
    {
    case figureType::triangle:
        return fig->base1 / 2.0 * fig->height;
    case figureType::rectangle:
        return fig->base1 * fig->height;
    case figureType::trapezoid: 
    case figureType::parallelogram:
        return (fig->base1 + fig->base2) / 2.0 * fig->height;
    default:
        return 0;
        break;
    }
}
