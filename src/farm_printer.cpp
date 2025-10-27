#include <iostream>

#include "farm_printer.hpp"

void FarmPrinter::print_static(int rows, int columns)
{
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < columns; ++j)
        {
            std::cout << ". ";
        }
        std::cout << '\n';
    }
}

void FarmPrinter::print(const Farm &farm, const Player &player)
{
    int rows = farm.get_rows();
    int columns = farm.get_columns();
    const auto& grid = farm.get_grid();

    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < columns; ++j)
        {
            if (i == player.get_row() && j == player.get_column())
                std::cout << "@ ";
            else
                std::cout << grid[i][j] << ' ';
        }
        std::cout << "\n";
    }
}
