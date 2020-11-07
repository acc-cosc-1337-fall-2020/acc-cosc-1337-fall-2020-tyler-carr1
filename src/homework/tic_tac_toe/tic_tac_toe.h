#include<string>
#include<vector>
#include<iostream>

//h

using std::string, std::vector, std::cout;

#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

class TicTacToe
{
  public:
  bool game_over();
  void mark_board(int position) {pegs[position-1] = player; if(game_over() == false){set_next_player();}}
  void start_game(string first_player) {player = first_player; clear_board();}
  string get_player() const {return player;}
  void display_board() const;

  //new 20201030
  string get_winner() {return winner;}

  //new 20201106
  friend std::istream& operator>>(std::istream& i, TicTacToe& t);
  friend std::ostream& operator<<(std::ostream& out, const TicTacToe& t);

  private:
  bool check_board_full() const;
  void set_next_player();
  void clear_board();

  //new 20201030
  bool check_column_win();
  bool check_row_win();
  bool check_diagonal_win();
  void set_winner();

  string player;
  vector<string> pegs{" ", " ", " ", " ", " ", " ", " ", " ", " "};
  string winner;
};

#endif