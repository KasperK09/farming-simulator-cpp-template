#pragma once

class Player
{
private:
    int row;
    int column;

public:
    Player() : row(0), column(0) {}

    int get_row() const { return row; }
    int get_column() const { return column; }

    void set_position(int new_row, int new_column)
    {
        row = new_row;
        column = new_column;
    }

    void move(int row_change, int column_change, int max_rows, int max_columns)
    {
        row += row_change;
        column += column_change;

        if (row < 0) row = 0;
        if (column < 0) column = 0;
        if (row >= max_rows) row = max_rows - 1;
        if (column >= max_columns) column = max_columns - 1;
    }
};
