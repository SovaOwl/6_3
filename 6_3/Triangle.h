#include"Figure.h"
#pragma once

class Triangle :public Figure
{
private:
    int a1, b1, c1;
    int A1, B1, C1;

public:
    Triangle(int a2, int b2, int c2, int A2, int B2, int C2) :Figure()
    {
        set_figure_name("Треугольник:");
        a1 = a2, b1 = b2, c1 = c2, A1 = A2, B1 = B2, C1 = C2;
    }
    void get_info() override;
};