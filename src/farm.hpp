#pragma once

#include <vector>
#include "player.hpp"

void move_player(Player &player, char direction, int rows, int columns);
void plant_carrot(std::vector<std::vector<char>> &farm, const Player &player);
void game_loop();
