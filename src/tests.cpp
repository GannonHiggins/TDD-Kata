#include "catch.hpp"
#include "Fizz.hpp"



TEST_CASE( "Empty string returns 0"){
    REQUIRE( Add("") == 0 );
}

