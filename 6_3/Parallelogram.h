#pragma once
#include"Quadrilateral.h"

class Parallelogram : public Quadrilateral //parallelogram (sides a,c and b,d are pairwise equal, angles A,C and B,D are pairwise equal)
{
public:
    Parallelogram(int a, int b, int A, int B);
};