#include "tic_tac_toe.h"
#include<iostream>
#include<string>

using std::cout, std::cin, std::string;

int main() 
{
  //set variables
  TicTacToe p;
  string starting_player;
  string winning_player;
  char choice;
  bool end_game = false;

  do
  {
    //prompt user for player choice
    cout<<"Enter which player you are (X or O): ";
    cin>>starting_player;

    //set first player
    p.start_game(starting_player);
    do
    {
      //setting loop veriables
      int position;
      
      //prompting user for position on board (no validation)
      cout<<"\nEnter a position from 1 to 9: ";
      cin>>position;

      //setting and displaying board with entered position
      p.mark_board(position);
      p.display_board();

      //validating if game is Over
      end_game = p.game_over();

    }while(end_game==false);
    
    winning_player = p.get_winner();

    cout<<"Game over, the winner is: "<<winning_player<<"\n"<<"Would you like to play again?";
    cin>>choice;
    cout<<"\n";

  }while(choice == 'y' || choice == 'Y');

	return 0;
}