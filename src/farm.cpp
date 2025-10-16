#include <string>

#include "farm.hpp"
#include "plot.hpp"
#include "soil.hpp"

Farm::Farm(int rows, int colums) :rows(rows), columns(columns)
{
  for(int i = 0; i < rows; i++)
  {
    std::vector<plot *> row;
    for(int j = 0; j < columns; j++)
    {
      Soil *soil = new Soil();
      row.push_back(soil)
    }
    plots.push_back(row);
  }
}
int Farm::get_number_of_rows()
{
  return rows;
}

int Farm::get_number_of_columns()
{
  return columns;
}

std::string Farm::get_symbol(int row, int column)
{
  if(Player->row() == row && player->column() == column)
  {
    return "@";
  } 
  else
  {
    return plots.at(row).at(columns)->symbol();
  }
}

void farm::plant(int row, int column, plot *plot)
{
  plot *current_plot = ploys.at(row).at(column);
  plots.at(row).at(column) = plot;
  delete current_plot;
}





