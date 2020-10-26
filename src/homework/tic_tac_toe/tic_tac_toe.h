#include<string>
#include<vector>
#include<iostream>

//h

using std::string, std::vector, std::cout;

class TicTacToe
{
  public:
  bool game_over() {return check_board_full();}
  void mark_board(int position) {pegs[position-1] = player; set_next_player();}
  void start_game(string first_player) {player = first_player;}
  string get_player() const {return player;}
  void display_board() const;
  
  private:
  bool check_board_full() const;

  void set_next_player();
  
  void clear_board();
  
  string player;
  vector<string> pegs{" ", " ", " ", " ", " ", " ", " ", " ", " "};
};