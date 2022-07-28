#pragma once
#include"Quadrilateral.h"

class Rectangle : public Quadrilateral //rectangle (sides a,c and b,d are pairwise equal, all angles are 90)
{
public:
    Rectangle(int a, int b);
};