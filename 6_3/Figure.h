#include<iostream>
#include <string>

using namespace std;

#pragma once
class Figure
{
private:
	string figure_name;

protected:
    void set_figure_name(string name);
    string get_figure_name();

public:
    Figure();
    virtual void get_info();
};