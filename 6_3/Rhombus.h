#include"Quadrilateral.h"
#pragma once

class Rhombus : public Quadrilateral //ромб (все стороны равны, углы A,C и B,D попарно равны)
{
public:
    Rhombus(int a, int A, int B) : Quadrilateral(a, a, a, a, A, B, A, B)
    {
        set_figure_name("Ромб:");
    }
};