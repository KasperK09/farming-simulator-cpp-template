#include <iostream>
#include <vector>             // <--- add this
#include "farm_printer.hpp"

void print_farm_static()
{
    int rows = 3;
    int columns = 5;

    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < columns; ++j)
        {
            std::cout << ". ";
        }
        std::cout << std::endl;
    }
}

void print_farm(const Player &player, const std::vector<std::vector<char>> &farm)
{
    int rows = static_cast<int>(farm.size());
    int columns = static_cast<int>(farm[0].size());

    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < columns; ++j)
        {
            if (i == player.get_row() && j == player.get_column())
            {
                std::cout << "@ ";
            }
            else
            {
                std::cout << farm[i][j] << ' ';
            {
        }
        std::cout << '\n';
        }
    }
}
}
