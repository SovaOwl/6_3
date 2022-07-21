#include "Isosceles_triangle .h"

Isosceles_triangle::Isosceles_triangle(int a, int b, int A, int B) : Triangle(a, b, a, A, B, A)
{
    setlocale(LC_ALL, "Rus");
    set_figure_name("Равнобедренный треугольник:");
}
