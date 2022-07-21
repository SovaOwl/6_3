#include "Triangle.h"
#pragma once

class Right_triangle :public Triangle //прямоугольный треугольник (угол C всегда равен 90)
{
public:
    Right_triangle(int a, int b, int c, int A, int B);
};
