#include"Triangle.h"
#pragma once

class Isosceles_triangle : public Triangle //�������������� ����������� (������� a � c �����, ���� A � C �����)
{
public:
    Isosceles_triangle(int a, int b, int A, int B) : Triangle(a, b, a, A, B, A)
    {
        set_figure_name("�������������� �����������:");
    }
};