#include "Equilateral_triangle .h"

Equilateral_triangle::Equilateral_triangle(int a) : Triangle(a, a, a, 60, 60, 60)
{
    setlocale(LC_ALL, "Rus");
    set_figure_name("Равносторонний треугольник:");
}
