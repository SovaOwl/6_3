#include "Figure.h"

void Figure::set_figure_name(string name)
{
    figure_name = name;
}

string Figure::get_figure_name()
{
    return figure_name;
}

void Figure::get_info()
{
    cout << figure_name << endl;

}
