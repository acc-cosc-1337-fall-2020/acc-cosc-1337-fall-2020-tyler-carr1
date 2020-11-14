//h
#include <iostream>
#include <vector>
#include <string>
#include <functional>
#include "tic_tac_toe.h"

using std::vector, std::cout, std::cin, std::string;

#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H

class TicTacToeManager : public TicTacToe
{
  public:
  void save_game(TicTacToe b);
  friend std::ostream& operator<<(std::ostream& out, const TicTacToeManager& manager);
  void get_winner_total(int& o, int& w, int& t);

  private:
  
  int x_win = 0;
  int o_win = 0;
  int ties = 0;

  void update_winner_count(string winner);
  vector<reference_wrapper<TicTacToe>> games{};
};
#endif