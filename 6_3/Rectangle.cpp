#include "Rectangle.h"

Rectangle::Rectangle(int a, int b) : Quadrilateral(a, b, a, b, 90, 90, 90, 90)
{
    setlocale(LC_ALL, "Rus");
    set_figure_name("Прямоугольник:");
}
