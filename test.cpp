#define CATCH_CONFIG_MAIN
#include "functions_to_implement.cpp"
#include "catch.hpp"
#include <vector>

TEST_CASE( "Compute EvenMask", "[evenmask]") {
    REQUIRE( EvenMask(std::vector<int> v{1,2,3,4}) == std::vector<bool> b{false,true,false,true});
    REQUIRE( EvenMask(std::vector<int> v{2,4,6}) == std::vector<bool> b{true,true,true});
    REQUIRE( EvenMask(std::vector<int> v{3,5,1}) == std::vector<bool> b{false,false,false});
}

