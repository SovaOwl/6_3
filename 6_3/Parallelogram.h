#include"Quadrilateral.h"
#pragma once

class Parallelogram : public Quadrilateral //�������������� (������� a,c � b,d ������� �����, ���� A,C � B,D ������� �����)
{
public:
    Parallelogram(int a, int b, int A, int B) : Quadrilateral(a, b, a, b, A, B, A, B)
    {
        set_figure_name("��������������:");
    }
};