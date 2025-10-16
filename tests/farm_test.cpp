#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/farm.hpp"

TEST_CASE( "it can be initilized with a single plot (1 by 1)" )
{
    Player player
    Farm farm(1, 1);
    REQUIRE( farm.get_numbers_of_rows() == 1 );
    REQUIRE( farm.get_numbers_of_columns() == 1 );
}

TEST_CASE( "it can be initilized with a single plot (1 by 1)" )
{
    Farm farm(1, 2);
    REQUIRE( farm.get_numbers_of_rows() == 1 );
    REQUIRE( farm.get_numbers_of_columns() == 2 );
}

TEST_CASE( "it can be initilized with a single plot (1 by 1)" )
{
    Farm farm(2, 1);
    REQUIRE( farm.get_numbers_of_rows() == 1 );
    REQUIRE( farm.get_numbers_of_columns() == 3 );
}

TEST_CASE( "it is initilized for a single soil plot" )
{
    Farm farm(1, 1);
    REQUIRE( farm.get_symbol(0, 0) == "." );
}

TEST_CASE( "it is initilized for a 1 by 2 plot" )
{
    Farm farm(1, 2);
    REQUIRE( farm.get_symbol(0, 0) == "." );
    REQUIRE( farm.get_symbol(0, 1) == "." );
}

TEST_CASE( "it allows us to plant a carrot" )
{
    Farm farm(1, 2);
    carrot carrot;
    farm.plant(0, 0, &carrot);
    REQUIRE( farm.get_symbol(0, 0) == "." );
    REQUIRE( farm.get_symbol(0, 1) == "." );
}
