#include <iostream>
#include <vector>
#include "farm.hpp"
#include "farm_printer.hpp"

void move_player(Player &player, char direction, int rows, int columns)
{
    int new_row = player.get_row();
    int new_col = player.get_column();

    switch (direction)
    {
    case 'w': case 'W': new_row--; break;
    case 's': case 'S': new_row++; break;
    case 'a': case 'A': new_col--; break;
    case 'd': case 'D': new_col++; break;
    default: return;
    }

    // keep inside bounds
    if (new_row < 0) new_row = 0;
    if (new_col < 0) new_col = 0;
    if (new_row >= rows) new_row = rows - 1;
    if (new_col >= columns) new_col = columns - 1;

    player.set_position(new_row, new_col);
}

void plant_carrot(std::vector<std::vector<char>> &farm, const Player &player)
{
    int r = player.get_row();
    int c = player.get_column();
    farm[r][c] = 'v';  // mark carrot on this tile
}

void game_loop()
{
    const int rows = 5;
    const int columns = 7;
    Player player;

    std::vector<std::vector<char>> farm(rows, std::vector<char>(columns, '.'));

    char input;
    bool running = true;

    int steps = 0;
    int day = 1;

    while (running)
    {
        std::cout << "=== Day " << day << " ===\n";
        print_farm(player, farm);
        std::cout << "\nMove (WASD), Plant (C), or Quit (Q): ";
        std::cin >> input;

        if (input == 'q' || input == 'Q')
        {
            running = false;
        }
        else if (input == 'c' || input == 'C')
        {
            plant_carrot(farm, player);
        }
        else
        {
            move_player(player, input, rows, columns);
            steps++;
        }

        if (steps >= 10)
        {
            std::cout << "\nDay " << day << " has ended!\n\n";
            steps = 0;
            day++;
        }

        std::cout << "\n";
    }

    std::cout << "Thanks for playing!\n";
}
