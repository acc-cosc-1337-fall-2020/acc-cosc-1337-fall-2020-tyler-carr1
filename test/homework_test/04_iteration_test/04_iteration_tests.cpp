#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "dna.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test Get GC-Content Function")
{
  REQUIRE(get_gc_content("AGCTATAG") == 0.375);
  REQUIRE(get_gc_content("CGCTATAG") == 0.50);
}

TEST_CASE("Test Get Reverse String Function")
{
  REQUIRE(reverse_string("AGCTATAG") == "GATATCGA");
  REQUIRE(reverse_string("CGCTATAG") == "GATATCGC");
}

TEST_CASE("Test Get Reverse String Complement Function")
{
  string test1 = "AAAACCCGGT";
  string test2 = "CCCGGAAAAT";

  REQUIRE(get_dna_complement(test1) == "ACCGGGTTTT");
  REQUIRE(get_dna_complement(test2) == "ATTTTCCGGG");
}