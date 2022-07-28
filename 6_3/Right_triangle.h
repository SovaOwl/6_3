#pragma once
#include "Triangle.h"

class Right_triangle :public Triangle //right triangle (angle C is always 90)
{
public:
    Right_triangle(int a, int b, int c, int A, int B);
};
