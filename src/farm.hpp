#pragma once

#include <string>
#include <vector>

#include "plot.hpp"
#include "player.cpp"

class Farm
{
private:
    int rows;
    int columns;
    std::vector<std::vector<plot *>> plots;
    player *player;
    

public:
    Farm(int rows, int columns);
    int get_numbers_of_rows();
    int get_number_of_columns();
    std::string get_symbol(int row, int column);
    void plant(int row, int column, plot *plot);
};

