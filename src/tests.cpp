#include "catch.hpp"
#include "Fizz.hpp"



TEST_CASE( "Empty string returns 0"){
    REQUIRE( FizzBuzz(0) == 0 );
    REQUIRE( FizzBuzz(1) == 0 );
}

