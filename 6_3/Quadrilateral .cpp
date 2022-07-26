#include <iostream>
#include "Quadrilateral.h"

Quadrilateral::Quadrilateral(int a2, int b2, int c2, int d2, int A2, int B2, int C2, int D2) :Figure()
{
    set_figure_name("Quadrilateral:");
    a1 = a2, b1 = b2, c1 = c2, d1 = d2, A1 = A2, B1 = B2, C1 = C2, D1 = D2;
}

void Quadrilateral::get_info()
{
    cout << get_figure_name() << endl;
    cout << "Parties: " << "a=" << a1 << " " << "b=" << b1 << " " << "c=" << c1 << " " << "d=" << d1 << endl;
    cout << "Corners: " << "A=" << A1 << " " << "B=" << B1 << " " << "C=" << C1 << " " << "D=" << D1 << endl << endl;
}
