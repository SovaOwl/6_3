#include"Quadrilateral.h"
#pragma once

class Rectangle : public Quadrilateral //прямоугольник (стороны a,c и b,d попарно равны, все углы равны 90)
{
public:
    Rectangle(int a, int b) : Quadrilateral(a, b, a, b, 90, 90, 90, 90)
    {
        set_figure_name("Прямоугольник:");
    }
};