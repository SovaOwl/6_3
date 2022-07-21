#include "Triangle.h"

Triangle::Triangle(int a2, int b2, int c2, int A2, int B2, int C2)
{
    set_figure_name("Треугольник:");
    a1 = a2, b1 = b2, c1 = c2, A1 = A2, B1 = B2, C1 = C2;
}

void Triangle::get_info()
{
    cout << get_figure_name() << endl;
    cout << "Стороны: " << "a=" << a1 << " " << "b=" << b1 << " " << "c=" << c1 << endl;
    cout << "Углы: " << "A=" << A1 << " " << "B=" << B1 << " " << "C=" << C1 << endl << endl;
}
