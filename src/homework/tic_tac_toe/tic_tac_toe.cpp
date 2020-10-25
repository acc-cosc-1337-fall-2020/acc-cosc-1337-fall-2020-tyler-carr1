//cpp
#include"tic_tac_toe.h"

bool TicTacToe::check_board_full()
{
  TicTacToe p;
  int amount = 0;
  bool check;
	for (int i = 0; i < 9; i++)
	{
		if (pegs[i] == " ")
    {
			amount++;
    }
  }
  if(amount>0)
  {
    check = true;
  }
  else
  {
    check = false;
  }
  return check;
}