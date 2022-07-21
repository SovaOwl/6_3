#include "Square.h"

Square::Square(int a) : Quadrilateral(a, a, a, a, 90, 90, 90, 90)
{
    setlocale(LC_ALL, "Rus");
    set_figure_name(" вадрат:");
}
