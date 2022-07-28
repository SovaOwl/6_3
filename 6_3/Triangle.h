#pragma once
#include"Figure.h"

class Triangle :public Figure
{
private:
    int a1, b1, c1;
    int A1, B1, C1;

public:
    Triangle(int a2, int b2, int c2, int A2, int B2, int C2);
    void get_info() override;
};