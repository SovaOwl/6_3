#include <iostream>
#include"Figure.h"
#include"Triangle.h"
#include"Right_triangle.h"
#include"Isosceles_triangle .h"
#include"Equilateral_triangle .h"
#include"Quadrilateral.h"
#include"Rectangle.h"
#include"Square.h"
#include"Parallelogram.h"
#include"Rhombus.h"

using namespace std;

void print_figures(Figure* figure)
{
	figure->get_info();

}
int main()
{
	setlocale(LC_ALL, "Rus");

    Triangle triangle(10, 20, 30, 50, 60, 70);
    Right_triangle  right_triangle(10, 20, 30, 50, 60);
    Isosceles_triangle isosceles_triangle(10, 20, 50, 60);
    Equilateral_triangle equilateral_triangle(30);

    Quadrilateral quadrilateral(10, 20, 30, 40, 50, 60, 70, 80);
    Rectangle rectangle(10, 20);
    Square square(20);
    Parallelogram parallelogram(20, 30, 30, 40);
    Rhombus rhombus(30, 30, 40);

    print_figures(&triangle);
    print_figures(&right_triangle);
    print_figures(&isosceles_triangle);
    print_figures(&equilateral_triangle);

    print_figures(&quadrilateral);
    print_figures(&rectangle);
    print_figures(&square);
    print_figures(&parallelogram);
    print_figures(&rhombus);
}