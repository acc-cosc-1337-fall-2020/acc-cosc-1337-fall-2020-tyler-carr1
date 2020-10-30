#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test first player set to X")
{
  TicTacToe p;
  p.start_game("X");
  REQUIRE(p.get_player() == "X");
}

TEST_CASE("Test first player set to O")
{
  TicTacToe p;
  p.start_game("O");
  REQUIRE(p.get_player() == "O");
}

TEST_CASE("Test game over if 9 slots are selected")
{
  //XOO
  //OOX
  //XXO
  TicTacToe p;
  p.start_game("X");
  p.mark_board(1);
  p.start_game("O");
  p.mark_board(2);
  p.start_game("O");
  p.mark_board(3);
  p.start_game("O");
  p.mark_board(4);
  p.start_game("O");
  p.mark_board(5);
  p.start_game("X");
  p.mark_board(6);
  p.start_game("X");
  p.mark_board(7);
  p.start_game("X");
  p.mark_board(8);
  p.start_game("O");
  p.mark_board(9);
  p.game_over();
  REQUIRE(p.get_winner() == "C");
}

TEST_CASE("Test win by first column")
{
  TicTacToe p;
  p.start_game("X");
  p.mark_board(1);
  p.mark_board(4);
  p.mark_board(7);
  p.start_game("O");
  p.mark_board(2);
  p.mark_board(3);
  p.mark_board(5);
  p.mark_board(6);
  p.mark_board(8);
  p.mark_board(9);
  REQUIRE(p.game_over() == true);
}
TEST_CASE("Test win by second column")
{
  TicTacToe p;
  p.start_game("X");
  p.mark_board(2);
  p.mark_board(5);
  p.mark_board(8);
  p.start_game("O");
  p.mark_board(1);
  p.mark_board(3);
  p.mark_board(4);
  p.mark_board(6);
  p.mark_board(7);
  p.mark_board(9);
  REQUIRE(p.game_over() == true);
}

TEST_CASE("Test win by third column")
{
  TicTacToe p;
  p.start_game("X");
  p.mark_board(3);
  p.mark_board(6);
  p.mark_board(9);
  p.start_game("O");
  p.mark_board(1);
  p.mark_board(2);
  p.mark_board(4);
  p.mark_board(5);
  p.mark_board(7);
  p.mark_board(8);
  REQUIRE(p.game_over() == true);
}

TEST_CASE("Test win by first row")
{
  TicTacToe p;
  p.start_game("X");
  p.mark_board(1);
  p.mark_board(2);
  p.mark_board(3);
  p.start_game("O");
  p.mark_board(4);
  p.mark_board(5);
  p.mark_board(6);
  p.mark_board(7);
  p.mark_board(8);
  p.mark_board(9);
  REQUIRE(p.game_over() == true);
}

TEST_CASE("Test win by second row")
{
  TicTacToe p;
  p.start_game("X");
  p.mark_board(4);
  p.mark_board(5);
  p.mark_board(6);
  p.start_game("O");
  p.mark_board(1);
  p.mark_board(2);
  p.mark_board(3);
  p.mark_board(7);
  p.mark_board(8);
  p.mark_board(9);
  REQUIRE(p.game_over() == true);
}

TEST_CASE("Test win by third row")
{
  TicTacToe p;
  p.start_game("X");
  p.mark_board(7);
  p.mark_board(8);
  p.mark_board(9);
  p.start_game("O");
  p.mark_board(1);
  p.mark_board(2);
  p.mark_board(3);
  p.mark_board(4);
  p.mark_board(5);
  p.mark_board(6);
  REQUIRE(p.game_over() == true);
}

TEST_CASE("Test win diagonally from top left")
{
  TicTacToe p;
  p.start_game("X");
  p.mark_board(1);
  p.mark_board(5);
  p.mark_board(9);
  p.start_game("O");
  p.mark_board(2);
  p.mark_board(3);
  p.mark_board(4);
  p.mark_board(6);
  p.mark_board(7);
  p.mark_board(8);
  REQUIRE(p.game_over() == true);
}

TEST_CASE("Test win diagonally from top right")
{
  TicTacToe p;
  p.start_game("X");
  p.mark_board(3);
  p.mark_board(5);
  p.mark_board(7);
  p.start_game("O");
  p.mark_board(1);
  p.mark_board(2);
  p.mark_board(4);
  p.mark_board(6);
  p.mark_board(8);
  p.mark_board(9);
  REQUIRE(p.game_over() == true);
}