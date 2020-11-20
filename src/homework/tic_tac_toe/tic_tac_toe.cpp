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

std::ostream& operator<<(std::ostream& out, const TicTacToe& game)
{ 
  out<<"Winner: "<<game.get_winner()<<"\n";

  for (std::size_t i = 0; i < game.pegs.size(); i += sqrt(game.pegs.size()))
	{		
		out << game.pegs[i] << "|" << game.pegs[i + 1] << "|" << game.pegs[i + 2];			

		if (game.pegs.size() == 16)
		{
			out << "|" << game.pegs[i + 3];
		}

    out << "\n";
	}		

  out << "\n";
  return out;
}

std::istream& operator>>(std::istream& in, TicTacToe& game)
{
  unsigned int position;
  cout<<"Enter position from 1 to "<<game.pegs.size();
  in>>position;

  while(!in.good() || (position < 1 || position > game.pegs.size()))

  cout<<"Enter position from 1 to "<<game.pegs.size();

  in>>position;
  
  game.mark_board(position);

  return in;
}