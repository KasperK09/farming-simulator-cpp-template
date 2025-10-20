#pragma once

#include <vector>        // <--- add this
#include "player.hpp"

void print_farm_static();
void print_farm(const Player &player, const std::vector<std::vector<char>> &farm);
