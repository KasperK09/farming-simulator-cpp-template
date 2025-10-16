#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/player.cpp"

TEST_CASE( "it allows us to plant a carrot" )
{
    Player player;
    REQUIRE(player.row() == 0);
    REQUIRE(player.column == 0);
}

TEST_CASE( "it allows us to plant a carrot" )
{
    Player player;
    Player.move_right();
    REQUIRE(player.row() == 0);
    REQUIRE(player.column == 1);
}
