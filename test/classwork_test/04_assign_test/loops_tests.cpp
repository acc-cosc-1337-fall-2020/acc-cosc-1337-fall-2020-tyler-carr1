#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "loops.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test the Factorial Function")
{
  REQUIRE(factorial_func(3)==6);
  REQUIRE(factorial_func(4)==24);
  REQUIRE(factorial_func(5)==120);
}