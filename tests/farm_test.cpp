#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/farm.hpp"
#include "../src/player.hpp"

TEST_CASE("checks to see that you cannot plant on another carrot")
{
    Farm farm;
    Player player;

    farm.plant_carrot(player);
    REQUIRE(farm.get_grid()[0][0] == 'v');

    farm.plant_carrot(player);
    REQUIRE(farm.get_grid()[0][0] == 'v'); 

    farm.grow_crops();
    REQUIRE(farm.get_grid()[0][0] == 'V');

    farm.plant_carrot(player);
    REQUIRE(farm.get_grid()[0][0] == 'V');
}


TEST_CASE("check to make sure carrot mature when day is ended")
{
    Farm farm;
    Player player;

    farm.plant_carrot(player);
    REQUIRE(farm.get_grid()[0][0] == 'v');

    farm.grow_crops();
    REQUIRE(farm.get_grid()[0][0] == 'V');
}

TEST_CASE("checks to make sure mature carrots can be harvested")
{
    Farm farm;
    Player player;

    farm.plant_carrot(player);
    farm.grow_crops();
    REQUIRE(farm.get_grid()[0][0] == 'V');

    farm.harvest_crop(player);
    REQUIRE(farm.get_grid()[0][0] == '.');
}

TEST_CASE("checks to make sure harvesting on empty plot doesn't do anything")
{
    Farm farm;
    Player player;

    REQUIRE(farm.get_grid()[0][0] == '.');
 
    farm.harvest_crop(player);
    REQUIRE(farm.get_grid()[0][0] == '.');
}
