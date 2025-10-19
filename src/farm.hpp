#pragma once

#include "player.hpp"

void print_farm(const Player &player, int rows, int columns);
void move_player(Player &player, char direction, int row, int columns);