#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "functions.hpp"

TEST_CASE("Temperature functions", "[temperature]")
{
    REQUIRE(convert_F_to_C(-40.0) == -40.0);
}