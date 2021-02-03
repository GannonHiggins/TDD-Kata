#include "catch.hpp"
#include "Fizz.hpp"
#include <vector>


TEST_CASE( "using a string to input numbers"){
    REQUIRE( FizzBuzz("0") == "0" );
    REQUIRE( FizzBuzz("1") == "1" );
    REQUIRE( FizzBuzz("2") == "2" );
    REQUIRE( FizzBuzz("3") == "Fizz" );
    REQUIRE( FizzBuzz("4") == "4" );
    REQUIRE( FizzBuzz("5") == "Buzz" );
}

TEST_CASE("numbers with two digits"){
    REQUIRE( FizzBuzz("10") == "Buzz" );
    REQUIRE( FizzBuzz("11") == "11" );
    REQUIRE( FizzBuzz("12") == "Fizz" );
    REQUIRE( FizzBuzz("13") == "13" );
    REQUIRE( FizzBuzz("14") == "14" );
    REQUIRE( FizzBuzz("15") == "FizzBuzz" );

}

