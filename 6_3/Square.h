#include"Quadrilateral.h"
#pragma once

class Square : public Quadrilateral //������� (��� ������� �����, ��� ���� ����� 90)
{
public:
    Square(int a) : Quadrilateral(a, a, a, a, 90, 90, 90, 90)
    {
        set_figure_name("�������:");
    }
};