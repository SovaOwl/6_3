#include"Quadrilateral.h"
#pragma once

class Rhombus : public Quadrilateral //���� (��� ������� �����, ���� A,C � B,D ������� �����)
{
public:
    Rhombus(int a, int A, int B) : Quadrilateral(a, a, a, a, A, B, A, B)
    {
        set_figure_name("����:");
    }
};