//cpp
#include "tic_tac_toe_data.h"

void save_games(const std::vector<std::unique_ptr<TicTacToe>>& games)
{
  for(auto game: games)
  {
    if(games != " ")
    {
      return false;
    }
  }
  return true;
}