#include <iostream>

#include "farm_printer.hpp"

void print_farm()
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