#include "Rhombus.h"

Rhombus::Rhombus(int a, int A, int B) : Quadrilateral(a, a, a, a, A, B, A, B)
{
    setlocale(LC_ALL, "Rus");
    set_figure_name("Ромб:");
}
