#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>


#include "../src/farm.hpp"
#include "../src/farm_printer.hpp"
#include "../src/player.cpp"

TEST_CASE( "it pretty prints a single plot of land" )
{
    Farm farm(1, 1);
    FarmPrinter printer(&farm);
    REQUIRE( printer.pretty_print() == ". \n" );
}

TEST_CASE( "it pretty prints a 1 by 2 farm" )
{
    Farm farm(1, 2);
    FarmPrinter printer(&farm);
    REQUIRE( printer.pretty_print() == ". . \n" );
}

TEST_CASE( "it pretty prints a 1 by 2 farm" )
{
    Farm farm(2, 1);
    FarmPrinter printer(&farm);
    REQUIRE( printer.pretty_print() == ". \n> \n" );
}