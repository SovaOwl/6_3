#include "Rectangle.h"

Rectangle::Rectangle(int a, int b) : Quadrilateral(a, b, a, b, 90, 90, 90, 90)
{
    set_figure_name("Прямоугольник:");
}
