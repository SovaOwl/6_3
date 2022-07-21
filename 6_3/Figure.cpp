#include "Figure.h"




void Figure::set_figure_name(string name)
{
    setlocale(LC_ALL, "Rus");
    figure_name = name;
}

string Figure::get_figure_name()
{
    return figure_name;
}

Figure::Figure()
{
    figure_name = "Фигура:";
}

void Figure::get_info()
{
    cout << figure_name << endl;

}
