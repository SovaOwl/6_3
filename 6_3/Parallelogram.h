#include"Quadrilateral.h"
#pragma once

class Parallelogram : public Quadrilateral //параллелограмм (стороны a,c и b,d попарно равны, углы A,C и B,D попарно равны)
{
public:
    Parallelogram(int a, int b, int A, int B);
};