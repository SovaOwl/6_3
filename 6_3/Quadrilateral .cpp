#include "Quadrilateral.h"

void Quadrilateral::get_info()
{
    cout << get_figure_name() << endl;
    cout << "Стороны: " << "a=" << a1 << " " << "b=" << b1 << " " << "c=" << c1 << " " << "d=" << d1 << endl;
    cout << "Углы: " << "A=" << A1 << " " << "B=" << B1 << " " << "C=" << C1 << " " << "D=" << D1 << endl << endl;
}
