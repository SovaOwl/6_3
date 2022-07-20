#include"Figure.h"
#pragma once

class Quadrilateral :public Figure
{
private:
    int a1, b1, c1, d1;
    int A1, B1, C1, D1;

public:

    Quadrilateral(int a2, int b2, int c2, int d2, int A2, int B2, int C2, int D2) :Figure()
    {
        set_figure_name("Четырёхугольник:");
        a1 = a2, b1 = b2, c1 = c2, d1 = d2, A1 = A2, B1 = B2, C1 = C2, D1 = D2;
    }
    void get_info() override;
};