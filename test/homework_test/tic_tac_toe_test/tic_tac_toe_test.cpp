#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test Game")
{
  TicTacToe p;
  
  p.mark_board(1);
  REQUIRE(p.game_over() == false);
  p.mark_board(2);
  REQUIRE(p.game_over() == false);
  p.mark_board(3);
  REQUIRE(p.game_over() == false);
  p.mark_board(4);
  REQUIRE(p.game_over() == false);
  p.mark_board(5);
  REQUIRE(p.game_over() == false);
  p.mark_board(6);
  REQUIRE(p.game_over() == false);
  p.mark_board(7);
  REQUIRE(p.game_over() == false);
  p.mark_board(8);
  REQUIRE(p.game_over() == false);
  p.mark_board(9);
  REQUIRE(p.game_over() == true);
}
