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
  void display_board() const 
  {
    cout<<pegs[0]<<"|"<<pegs[1]<<"|"<<pegs[2]<<"\n"<<pegs[3]<<"|"<<pegs[4]<<"|"<<pegs[5]<<"\n"<<pegs[6]<<"|"<<pegs[7]<<"|"<<pegs[8]<<"\n\n";
  };

  private:
  bool check_board_full();

  void set_next_player()
  {
    if(player == "X")
    {
      player = "O";
    }
    else
    {
      player = "X";
    }
  }

  void clear_board()
  {
   for(int i = 0; i < 9; i++) 
   {
     pegs[i] = " ";
   }
  }

  string player;
  vector<string> pegs{" ", " ", " ", " ", " ", " ", " ", " ", " "};
};