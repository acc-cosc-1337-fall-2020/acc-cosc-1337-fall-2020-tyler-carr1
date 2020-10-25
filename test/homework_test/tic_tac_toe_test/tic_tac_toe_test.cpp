#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test Game")
{
  TicTacToe p;
  REQUIRE(p.start_game("X")=="X");
  REQUIRE(p.mark_board(1)==false);
}
