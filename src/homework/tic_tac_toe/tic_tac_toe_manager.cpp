//cpp
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe.h"
#include <vector>

void TicTacToeManager::save_game(TicTacToe b)
{
  games.push_back(b);

  update_winner_count(b.get_winner());
}

void TicTacToeManager::update_winner_count(string winner)
{
  
  if(winner == "X")
  {
    x_win++;
  }
  else if (winner == "O")
  {
    o_win++;
  }
  else
  {
    ties++;
  }
}

std::ostream& operator<<(std::ostream& out, const TicTacToeManager& manager)
{
  TicTacToe t;
  for(std::size_t i = 0; i < manager.games.size(); i++)
  {
    t.display_board();
  }
  return out;
}

void TicTacToeManager::get_winner_total(int& o, int& w, int& t)
{
  o = x_win;
  w = o_win;
  t = ties;
}