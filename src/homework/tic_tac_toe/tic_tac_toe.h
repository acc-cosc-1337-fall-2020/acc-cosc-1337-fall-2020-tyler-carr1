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

  //new 20201113
  TicTacToeGame(int s) : pegs(s*s, " " ){}

  private:
  bool check_board_full() const;
  void set_next_player();
  void clear_board();

  //new 20201030
  void set_winner();
  string player;
  string winner;

  //new 20201113
  protected:
  vector<string> pegs{" ", " ", " ", " ", " ", " ", " ", " ", " "};
  virtual bool check_column_win();
  virtual bool check_row_win();
  virtual bool check_diagonal_win();
};

#endif