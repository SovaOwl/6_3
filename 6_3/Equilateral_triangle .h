#include"Triangle.h"
#pragma once

class Equilateral_triangle : public Triangle //�������������� ����������� (��� ������� �����, ��� ���� ����� 60)
{
public:
    Equilateral_triangle(int a) : Triangle(a, a, a, 60, 60, 60)
    {
        set_figure_name("�������������� �����������:");
    }
};
