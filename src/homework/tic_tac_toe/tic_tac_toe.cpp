//cpp
#include"tic_tac_toe.h"


//public fucntions

bool TicTacToe::game_over()
{
  if(check_row_win() == true)
  {
    set_winner();
    return true;
  }
  else if (check_column_win() == true)
  {
    set_winner();
    return true;
  }
  else if (check_diagonal_win() == true)
  {
    set_winner();
    return true;
  }
  else if (check_board_full() == true && check_column_win() == false && check_row_win() == false && check_diagonal_win() == false)
  {
    winner = "C";
    return true;
  }
  else
  {
    return false;
  }
}

void TicTacToe::display_board()const
{
  for(std::size_t i = 0; i < pegs.size(); i +=3)
  {
    std::cout<<pegs[i]<<"|"<<pegs[i+1]<<"|"<<pegs[i+2]<<"\n";
  }
}



//private functions
void TicTacToe::set_next_player()
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

bool TicTacToe::check_board_full()const
{
  for(auto peg: pegs)
  {
    if(peg == " ")
    {
      return false;
    }
  }
  return true;
}

void TicTacToe::clear_board()
{
  for(std::size_t i = 0; i < pegs.size(); ++i)
  {
    pegs[i] = " ";
  }
}

bool TicTacToe::check_column_win()
{
  return false;
}

bool TicTacToe::check_row_win()
{
  return false;
}

bool TicTacToe::check_diagonal_win()
{
  return false;
}

void TicTacToe::set_winner()
{
    if(player == "X")
  {
    winner = "X";
  }
  else
  {
    winner = "O";
  }
}

std::ostream& operator<<(std::ostream& out, const TicTacToe& t)
{ 
  for(std::size_t i = 0; i < t.pegs.size(); i +=3)
  {
    if(t.pegs.size() == 9)
    {
      out<<t.pegs[i]<<"|"<<t.pegs[i+1]<<"|"<<t.pegs[i+2]<<"\n";
    }
    else if(t.pegs.size() == 16)
    {
      out<<t.pegs[i]<<"|"<<t.pegs[i+1]<<"|"<<t.pegs[i+2]<<"|"<<t.pegs[i+3]<<"\n";
    }
  }

  return out;
}

std::istream& operator>>(std::istream& i, TicTacToe& t)
{
  int position;
  cout<<"\nEnter a position from 1 to 9: ";
  i>>position;

  t.mark_board(position);

  return i;
}